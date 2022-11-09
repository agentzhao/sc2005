# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the file system assignment
#    Defines set up assuming multiprogramming and virtual memory done first.
#    If not, use the "bare bones"  defines below. 
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES =-DTHREADS -DUSER_PROGRAM -DVM -DFILESYS_NEEDED -DFILESYS
INCPATH = -I../filesys -I../bin -I../vm -I../userprog -I../threads -I../machine
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H) $(FILESYS_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C) $(FILESYS_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O) $(FILESYS_O)

# bare bones version
# DEFINES =-DTHREADS -DFILESYS_NEEDED -DFILESYS
# INCPATH = -I../filesys -I../threads -I../machine
# HFILES = $(THREAD_H) $(FILESYS_H)
# CFILES = $(THREAD_C) $(FILESYS_C)
# C_OFILES = $(THREAD_O) $(FILESYS_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
main.o : ../threads/main.cc ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
  /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/system.h ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
  ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h 
list.o : ../threads/list.cc ../threads/copyright.h ../threads/list.h ../threads/utility.h \
  ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h 
scheduler.o : ../threads/scheduler.cc ../threads/copyright.h ../threads/scheduler.h \
  ../threads/list.h ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/system.h \
  ../machine/interrupt.h ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
  ../threads/synch.h 
synch.o : ../threads/synch.cc ../threads/copyright.h ../threads/synch.h ../threads/thread.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../machine/machine.h ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/list.h ../threads/system.h \
  ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h 
synchlist.o : ../threads/synchlist.cc ../threads/copyright.h ../threads/synchlist.h \
  ../threads/list.h ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/synch.h ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h 
system.o : ../threads/system.cc ../threads/copyright.h ../threads/system.h ../threads/utility.h \
  ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h ../threads/synch.h 
thread.o : ../threads/thread.cc ../threads/copyright.h ../threads/thread.h ../threads/utility.h \
  ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../machine/machine.h ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/switch.h ../threads/synch.h \
  ../threads/list.h ../threads/system.h ../threads/scheduler.h ../machine/interrupt.h \
  ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h 
utility.o : ../threads/utility.cc ../threads/copyright.h ../threads/utility.h \
  ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h 
threadtest.o : ../threads/threadtest.cc ../threads/copyright.h ../threads/system.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h ../threads/synch.h 
interrupt.o : ../machine/interrupt.cc ../threads/copyright.h ../machine/interrupt.h \
  ../threads/list.h ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/system.h ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
  ../threads/scheduler.h ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
  ../threads/synch.h 
sysdep.o : ../machine/sysdep.cc ../threads/copyright.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  /import-writable/gnu/lib/g++-include/signal.h /usr/include/signal.h /import-writable/gnu/lib/g++-include/sys/signal.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/sys/signal.h \
  /usr/include/vm/faultcode.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/sys/stdtypes.h \
  /import-writable/gnu/lib/g++-include/sys/types.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/sys/types.h \
  /usr/include/sys/sysmacros.h /import-writable/gnu/lib/g++-include/time.h /usr/include/time.h \
  /import-writable/gnu/lib/g++-include/sys/socket.h /usr/include/sys/socket.h \
  /import-writable/gnu/lib/g++-include/sys/file.h /usr/include/sys/file.h /usr/include/sys/fcntlcom.h \
  /import-writable/gnu/lib/g++-include/sys/stat.h /usr/include/sys/stat.h /usr/include/sys/un.h \
  /import-writable/gnu/lib/g++-include/sys/time.h /usr/include/sys/time.h ../machine/interrupt.h \
  ../threads/list.h ../threads/utility.h ../machine/sysdep.h ../threads/system.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h 
stats.o : ../machine/stats.cc ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
  /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../machine/stats.h 
timer.o : ../machine/timer.cc ../threads/copyright.h ../machine/timer.h ../threads/utility.h \
  ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/system.h ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
  ../filesys/synchdisk.h ../threads/synch.h 
addrspace.o : ../userprog/addrspace.cc ../threads/copyright.h ../threads/system.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h ../threads/synch.h ../bin/noff.h 
bitmap.o : ../userprog/bitmap.cc ../threads/copyright.h ../userprog/bitmap.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../filesys/openfile.h 
exception.o : ../userprog/exception.cc ../threads/copyright.h ../threads/system.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h ../threads/synch.h ../userprog/syscall.h 
progtest.o : ../userprog/progtest.cc ../threads/copyright.h ../threads/system.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h ../threads/synch.h ../machine/console.h 
console.o : ../machine/console.cc ../threads/copyright.h ../machine/console.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/system.h ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
  ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h 
machine.o : ../machine/machine.cc ../threads/copyright.h ../machine/machine.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../machine/translate.h ../machine/disk.h ../threads/system.h ../threads/thread.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h ../threads/synch.h 
mipssim.o : ../machine/mipssim.cc ../threads/copyright.h ../machine/machine.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../machine/translate.h ../machine/disk.h ../machine/mipssim.h ../threads/system.h \
  ../threads/thread.h ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
  ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h 
translate.o : ../machine/translate.cc ../threads/copyright.h ../machine/machine.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
  ../filesys/openfile.h ../threads/system.h ../threads/thread.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h ../threads/synch.h 
directory.o : ../filesys/directory.cc ../threads/copyright.h ../threads/utility.h \
  ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../filesys/filehdr.h ../machine/disk.h ../userprog/bitmap.h ../filesys/openfile.h \
  ../filesys/directory.h 
filehdr.o : ../filesys/filehdr.cc ../threads/copyright.h ../threads/system.h \
  ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/thread.h ../machine/machine.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h ../threads/synch.h ../filesys/filehdr.h ../userprog/bitmap.h 
filesys.o : ../filesys/filesys.cc ../threads/copyright.h ../machine/disk.h ../threads/utility.h \
  ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../userprog/bitmap.h ../filesys/openfile.h ../filesys/directory.h ../filesys/filehdr.h \
  ../filesys/filesys.h 
fstest.o : ../filesys/fstest.cc ../threads/copyright.h ../threads/utility.h \
  ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../filesys/filesys.h ../filesys/openfile.h ../threads/system.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
  ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h 
openfile.o : ../filesys/openfile.cc ../threads/copyright.h ../filesys/filehdr.h \
  ../machine/disk.h ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../userprog/bitmap.h ../filesys/openfile.h ../threads/system.h ../threads/thread.h \
  ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
  ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h 
synchdisk.o : ../filesys/synchdisk.cc ../threads/copyright.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/utility.h ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h \
  /import-writable/gnu/lib/g++-include/_G_config.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/synch.h ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/list.h 
disk.o : ../machine/disk.cc ../threads/copyright.h ../machine/disk.h ../threads/utility.h \
  ../machine/sysdep.h /import-writable/gnu/lib/g++-include/stdio.h /import-writable/gnu/lib/g++-include/_G_config.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdio.h \
  /import-writable/gnu/lib/g++-include/stdarg.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stdarg.h \
  /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/va-sparc.h \
  /import-writable/gnu/lib/g++-include/string.h /import-writable/gnu/lib/g++-include/memory.h \
  /import-writable/gnu/lib/g++-include/stddef.h /import-writable/gnu/lib/gcc-lib/sparc-sun-sunos4.1.3/2.3.3/include/stddef.h \
  ../threads/system.h ../threads/thread.h ../machine/machine.h ../machine/translate.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/synchdisk.h ../threads/synch.h 
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
