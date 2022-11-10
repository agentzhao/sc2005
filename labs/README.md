# Exp1-3

[answers](https://github.com/Benjababe/NTU-Assignments/blob/main/CZ2005%20Operating%20Systems/Lab%204/vm/tlb.cc)

## Overview and global variables

For every experiment in eg. `nachos/exp1` there is a `main.cc` which is the file that is run when you run `./nachos` from ternimal. In `main()`, the `Initialize()` which is found in `threads/system.cc` is called, which initalised **SIX** global variables, which can be accessed anywhere:

- `currentThread` - which is a pointer to the current "running" thread
- `threadToBeDestroyed` - which will be set when a thread is finished (thread calls `Finish()`)
- `scheduler` - a `Scheduler` object which is in charge of maintaining the ready queue
- `interrupt` - a `Interrupt` object which has a list of `PendingInterrupt` objects
- `stats` - which stores the global ticks in `stats->totalTicks`
- `timer` - a Timer object which which uses the interrupt to schedule new interrupts

## Scheduler

Located in `threads/scheduler.cc`. Contains all the logic in controlling the threads. Current implementation is **FCFS**

Attributes and methods:

- `readyList` - a `List` of `Thread *`, all of which are in the `READY` state
- `ReadyToRun(Thread * thread)` - add `thread` to `readyList` and sets the state of `thread` as `READY`
- `FindNextToRun()` - returns pointer to next thread (or NULL if list is empty). The thread is removed from `readyList`. This is where the scheduling algorithm would be, but in this case it just take the head of the list
- `Run(Thread *nextThread)`
  - save state of `currentThread`
  - set state of `nextThread` to `RUNNING`
  - if `currentThread` gave up CPU because it called `Finish()`, the it would have set `threadToBeDestroyed` to be itself. `Run()` will delete this thread and deallocate memory

## Threads

Located in `threads/thread.cc`. the pointer to the thread is treated as the thread control block(TCB) and is the one being passed around and queued.

Attributes and Methods:

- `Thread(char *name)` - constructor: sets thread as JUST_CREATED status, initialise stack to NULL
- `Fork(VoidFunctionPtr func, int arg, int joinP)` - gives the thread a function to run. Allocate stack, initialize registers. Calls `scheduler->ReadyToRun(this)` to put the thread into readyList, set status to READY. The `scheduler` is the one that sets its state to `RUNNING`
  - `arg` is just the forked thread id (?)
  - `joinP` If joinP == 1, join is going to happen
- `Yield()` - **The most important** method in all of nachOS because it causes a context switch
  - Suspends calling thread
  - calls `nextThread = scheduler->FindNextToRun()` to select another thread from the READY list. If it returns smth that is not NULL, then context switch
  - calls `scheduler->ReadyToRun(this)` to add itself to the back of the ready queue
  - calls `scheduler->Run(nextThread)` to start running the next thread. All state changes are handled by `scheduler`. Status set to RUNNING and call SWITCH() in switch.s to exchange running thread
- `Sleep()` - set its own status to `BLOCKED` (waiting), and calls `nextThread = scheduler->FindNextToRun()`. calls `scheduler->Run(nextThread)` if not NULL. If NULL then the CPU will idle
- `Finish()` - is automatically called with the thread's forked function is complete. Takes up one cycle of Ticks (TODO). Sets global variable `threadToBeDestroyed` as itself and calls `Sleep()` to trigger context switch, in which `scheduler->Run()` will destroy this thread. If `joinP` is `TRUE`, then it'll also let the thread waiting for it to continue. **In exp2, this is modified so that it resets the pending interrupt in `interrupt`**
- `Join(thread *forked)` - the thread will wait for `forked` to call `Finish()` before it reenters the ready queue. Thread forked must be joinable thread (joinP = 1)

## Timer

Located in `machine/Timer.cc`. Not the actual timer which counts down. Only job is to come up with numbers (fixed or random) for the next interrupt, the actual countdown is within the PendingInterrupt objects initialised by the interrupt object.

Attributes and Methods:

- `Timer(voidFnPointer handler, int arg, bool doRandom)` - constructor, called in `Initialize()`, calls `interrupt->Schedule(TimerHandler, this, TimeOfNextInterrupt(), TimerInt)`, which basically adds the first `PendingInterrupt` object. The `handler` is a by default `TimerInterruptHandler()` defined in `threads/system.cc`
- `TimerExpired()` - starts the next timer by calling `interrupt->Schedule(TimerHandler, this, TimeOfNextInterrupt(), TimerINt)`, and then calls `handler` function with given `args`
- `TimeOfNextInterrupt()` - returns a number, either random or fixed based on `doRandom` boolean flag. If fixed (and `handler` is `TimerInterruptHandler`), then the scheduler follows the round-robin schedulling algorithm. This is because `TimerInterruptHandler` calls `currentThread->Yield()` meaning that the interrupts are pre-emptive.
- `TimerHandler(int *dummy)` - a handler called in `CheckIfDue()` that calls `TimerExpired()` which then calls the actual `TimerInterruptHandler()`

## TimerInterruptHandler()

Defined in `threads/system.cc`. Calls `interrupt->YieldOnReturn()` which sets the YieldOnReturn flag to be `TRUE` (HONESTLY NO FKING CLUE WHAT THIS IS FOR)

**edit** this is so that the interrupt behaves as a non preemptive scheduler, and yields the thread after it is done

## Interrupt

Defined in `machine/interrupt.cc`. Used in Timer class.

Attributes and Methods:

- `PendingInterrupts[] pending` - a `List` of `PendingInterrupts`, sorted in increasing order, such that the system only needs to check the start of the list to see if an interrupt is needed.
- `Interrupt()` - constructor to initialise empty `pending` list
- `Schedule(handler, arg, fromNow, type)` - also **important**. Initialises a `PendingInterrupt` object with `PendingInterrupt(handler, arg, when, type)`. where `when = stats->totalTicks + fromNow `. This object is inserted into `pending` based on `when`
- `OneTick()` - increments the global variable `stats->totalTicks` and calls `CheckIfDue()`. If `YieldOnReturn` boolean flag is `TRUE`, then call `currentThread->Yield()` at the end.
- `CheckIfDue(boolean advanceClock)` - remove first `PendingInterrupt` and check it's when attribute. If not due, add it back to `pending` and return `FALSE`. If it is due, call the `TimerHandler()` in `Timer`, which in turn calls `TimerExpired()` and the actual `TimerInterruptHandler()`
- `YieldOnReturn()` - set `YieldOnReturn` boolean flag to be `TRUE`
  Other misc methods:
- `Idle() `- to wait for the next thread to enter ready queue
- `SetLevel()` and `ChangeLevel()` - to stop interrupts and start interrupts

## Overall Interrupt Sequence

Overall, all the steps during an interrupt takes up **one cycle on the CPU (10 Ticks in exp3). This is the reason that in exp2, the first experiment takes more ticks.** The steps are

- `interrupt->OneTick() `
  - increment `stats->totalTicks`
  - `CheckIfDue()`
    - `pendingInterrupt->TimerHandler()` (which is a method of Timer)
      - `timer->TimerExpired()`
        - `interrupt->Schedule()` to schedule the next pending interrupt
        - `TimerInterruptHandler()` defined in `system.cc`
          - `interrupt->YieldOnReturn()` to set `YieldOnReturn` flag to `TRUE`
  - check `YieldOnReturn` flag \*` currentThread->Yield()`
  - `YieldOnReturn = FALSE`

## Semaphores (threads/synch.cc)

Attributes and Methods:

- `int value` - non-negative Semaphore value
- `thread[] queue` - the waiting queue for the semaphore
- `Semaphore(name, initialValue)` - constructor
- `P()` - short for Probeer meaning try. Check if `value==0`. If so, Semaphore is not available and the thread has to sleep `currentThread->Sleep()`. If `value>0`, it means that the thread can enter the critical section, and value will be decremented to indicate what one unit of resource has been allocated.
- `V()` - short for Verhoog meaning increment. Called when thread exits the critical section. First thread in WAITING queue is put into READY list. Removes next thread in `queue` and if it's not NULL, call `scheduler->ReadyToRun(nextThread)` to move it back to the ready queue to enter the critical section, increment `value` to indicate that one unit of resource has been deallocated.

## Lock

Binary semaphore (FREE or BUSY **only**)

Attributes and Methods:

- `status` - a Semaphore
- `lock_owner`
- `Release()` - calls `status->V()`
- `Acquire()` - calls `status->P()`

## Condition Variable

Conqueue: List of threads

- Requires a Lock (interrupts must be disabled)
- Wait(Lock)
  - Releases the Lock, `conditionLock->Release()`
  - Relinquishes the CPU until signalled (Thread is appended to the waiting queue and put to sleep), `Conqueue->Append(currentThread)`, `currentThread->Sleep()`
  - Re-acquires the lock, `conditionLock->Acquire()`
- Signal(lock) / notify
  - Wakes up the first thread in the waiting queue (if any)
  - `thread = Conqueue->Remove()`, `scheduler->ReadyToRun(thread)`
- Broadcast(lock) / notifyAll
  - Wakes up all threads in the waiting queue (if any)
  - `while (!Conqueue->IsEmpty()) { do above }`

## Race Conditions

If two threads are modifying a shared `value`, the `value` must be wrapped carefully, to prevent a scenario where a context switch during a critical section will not allow another thread to enter its critical section.

# Exp4

## Overview and global variables

In exp4, instead of running threads, a user process is ran. The entry point for `./nachos` is in `threads/main.cc` where the `StartProcess(exe)` (defined in `userprog/progtest.cc`) will start the process. As the process runs, it indexes memory in it's logical memory space, which has to be translated to physical memory space. Paging is used, with a machine level **Translation Look-aside Buffer (TLB)** and a **Inverted Page Table (IPT)**. The TLB replacement algorithm is **FIFO**. The IPT replacement algorithm is **LRU** If there is a TLB miss, the exception handler will run UpdateTLB(), then the translation will be attempted again in IPT. If found, update TLB. A miss in the IPT means that page has to be loaded from the disk and we have to perform PageOutPageIn(). We keep track of the number of TLB misses, and the number of page faults in `stats`

Somewhere along the line, other that the 6 global vairables from exp1-3, a few more global variables are declared:

- `machine->tlb` - the actual TLB, an array of `TranslationEntry` object, each notably having a `virtualPage` and `PhysicalPage`
- `TBLSize` - 3, the size of TLB, accessed through `machine->tlb`, one per machine
- `FIFOPointer` - the index of TLB which had the earliest entry, ie the entry to be removed
- `PageSize` - 128 bytes, the size of a page and frame
- `memoryTable` - the IPT, index represents the physical frame number, with each entry having `pid`, `vPage` and `lastUsed`, one for whole system
- `NumPhysPages` - 4, the size of IPT, and the number of frames in memory.
- `memorySize` - (NumPhysPages \* PageSize)
- `virtual page size` - 128 bytes or 0x80. e.g 0x4cc is in vpn 9

```
// memoryTable[i], number of entries (4) equals to number of frames in main memory
  bool valid;        // if frame is valid (being used)
  SpaceId pid;       // pid of frame owner
  int vPage;         // corresponding virtual page
  bool dirty;        // if needs to be saved
  int TLBentry;      // corresponding TLB entry
  int lastUsed;      // used to see record last used tick
  OpenFile *swapPtr; // file to swap to
```

```
// machine->tlb[i]
  int virtualPage;  	// The page number in virtual memory.
  int physicalPage;  	// The page number in real memory (relative to the start of "mainMemory"
  bool valid;         // If this bit is set, the translation is ignored. (In other words, the entry hasn't been initialized.)
  bool readOnly;	    // If this bit is set, the user program is not allowed to modify the contents of the page.
  bool use;           // This bit is set by the hardware every time the page is referenced or modified.
  bool dirty;         // This bit is set by the hardware every time the page is modified
```

## machine->Translate(int virtAddr, int\* physAddr, int size, bool writing)

Defined in `machine/translate.cc`
Entry point for memory logic, when the process need to access a certain memory address in its logical space. In exp4, we assume that there is only **2** possible outcomes of this function.

1. If `virtAddr` is in TLB, then the physical address pointer will be assigned
2. If `virtAddr` is not in TLB, then `PageFaultException` is raised, and the exception handler defined in `userprog/exceptions.cc` will call `UpdateTLB(int vAddr)`

The actual implementation:

- split `virtAdrr` into `vpn` and `offset`, vpn = (unsigned)virtAddr / PageSize, offset = (unsigned)virtAddr % PageSize;
- Lookup VPN in `machine->tlb`, `machine->tlb[i].virtualPage == vpn && machine->tlb[i].valid`
  - `entry = &tlb[i] // FOUND!`, `pageFrame = entry->physicalPage`, `entry->use = TRUE; // set the use, dirty bits`
  - `\*phyAddr = pageFrame \* PageSize + offset`
  - this also means IPT will have this pid, vPage entry, whose `lastUsed` will be updated. `memorytable[physicalPage].lastUsed = stats.totalTicks`
- if not found, `return PageFaultException`. Somehow, the exception handler will call `UpdateTLB(vAddr)`

## UpdateTLB(int possible_badVAddr)

Defined in `vm/tlb.cc`. In exp4, we assume that the VAddr is valid, ie within range, and the error is only due to TLB miss, meaning that the VAddr is not found in TLB. The next check is to see if this virtual address is in the IPT.

- split `possible_badVAddr` into `vpn` and `offset`
- `phyPage = VpnToPhyPage(vpn)` - this function will return the index/frame number for this vpn, or -1 if the vpn is not in the IPT.
  - if found, `phyPage >= 0`, then call InsertToTLB(vpn, phyPage)
  - if not found, `phyPage = -1`, then call `InsertToTLB(vpn, PageOutPageIn(vpn))`
- note that `InsertToTLB()` is called regardless. Also, `stats->NumTlbMisses` is not incremented here, but rather in `InsertToTLB()`

## PageOutPageIn(int vpn)

Defined in `vm/tlb.cc`. This is called when there is a page fault, meaning that the required memory is not loaded into any physical frames, and has to be loaded in from disk. The frame replaced is determined by the LRU algorithm

- increment `stats->NumPageFaults`
- `phyPage = lruAlgorithm()` - this gets the index/frame number for the vpn to replace.
- load the actual memory to the frame
  - call `DoPageOut(phyPage)` - which pages out the frame is `memoryTable[phyPage].dirty` is `TRUE`. If we want to see if pages are paged out, we can do so here
  - call `DoPageIn(vpn, phyPage)`
- load respective page into `memoryTable[phyPage]`. Set `memoryTable[phyPage].lastUsed = 0`, this will be updated to the correct value in `InsertToTLB`
- return `phyPage`, which is then passed into `InsertToTLB`

## InsertToTLB(int vpn, int phyPage)

Defined in `vm/tlb.cc`. This is called for every TLB miss, and updates the TLB with the new information. The entry that is replaced is determined by FIFO.

- find empty TLB entry or check FIFOPointer to find victim
- update entry with new information, and update `FIFOPointer = (i+1) % TLBSize`
- increment `stats->NumTlbMusses`
- update `memoryTable[phyPage].lastUsed = stats->totalTicks` and `memoryTable[phyPage].TLBEntry = i`

## lruAlgorithm()

The replacement algorithm for IPT. Intuitively, look through the `memoryTable` to find the invalid entry or entry with the lowest `lastUsed` value, and set as the `victim` to be returned.

## To get CSV answers

For every TLB miss, we want to know what the IPT and TLB entry is being updated. The best place to do so is in `InsertInTLB(vpn, phyPage)`, since it will be called everytime a TLB miss happens. We can print the state of `machine->tlb, memoryTable` to get the values of the tables, and `phyPage` to get the updated IPT entry, and `FIFOPointer` to get the updated TLB entry.

If we want to get the data from only Page faults, we can do so in PageOutPageIn().

To get the entries where pages are paged out, we can print `phyPage` in `DoPageOut(phyPage)` under the condition that `memoryTable[phyPage].dirty` is `TRUE`

## Additional Notes

- if context switch, valid bits of TLB all set to 0
- if thread deleted, valid bits of TLB and IPT are set to 0
