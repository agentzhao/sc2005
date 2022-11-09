# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the threads assignment.  The threads assignment must
#  be done first!
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES = -DTHREADS
INCPATH = -I../threads -I../machine
HFILES = $(THREAD_H)
CFILES = $(THREAD_C)
C_OFILES = $(THREAD_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
main.o : ../threads/main.cc ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
  /usr/sww/lib/g++-include/stdio.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h \
  /usr/sww/lib/g++-include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h /usr/sww/lib/g++-include/string.h \
  /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../threads/system.h ../threads/thread.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h 
list.o : ../threads/list.cc ../threads/copyright.h ../threads/list.h ../threads/utility.h \
  ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h \
  /usr/sww/lib/g++-include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h /usr/sww/lib/g++-include/string.h \
  /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h 
scheduler.o : ../threads/scheduler.cc ../threads/copyright.h ../threads/scheduler.h \
  ../threads/list.h ../threads/utility.h ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h /usr/sww/lib/g++-include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h \
  /usr/sww/lib/g++-include/string.h /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../threads/thread.h ../threads/system.h ../machine/interrupt.h \
  ../machine/stats.h ../machine/timer.h 
synch.o : ../threads/synch.cc ../threads/copyright.h ../threads/synch.h ../threads/thread.h \
  ../threads/utility.h ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h \
  /usr/sww/lib/g++-include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h /usr/sww/lib/g++-include/string.h \
  /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../threads/list.h ../threads/system.h ../threads/scheduler.h \
  ../machine/interrupt.h ../machine/stats.h ../machine/timer.h 
synchlist.o : ../threads/synchlist.cc ../threads/copyright.h ../threads/synchlist.h \
  ../threads/list.h ../threads/utility.h ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h /usr/sww/lib/g++-include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h \
  /usr/sww/lib/g++-include/string.h /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../threads/synch.h ../threads/thread.h 
system.o : ../threads/system.cc ../threads/copyright.h ../threads/system.h ../threads/utility.h \
  ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h \
  /usr/sww/lib/g++-include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h /usr/sww/lib/g++-include/string.h \
  /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../threads/thread.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h 
thread.o : ../threads/thread.cc ../threads/copyright.h ../threads/thread.h ../threads/utility.h \
  ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h \
  /usr/sww/lib/g++-include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h /usr/sww/lib/g++-include/string.h \
  /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../threads/switch.h ../threads/synch.h ../threads/list.h \
  ../threads/system.h ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
  ../machine/timer.h 
utility.o : ../threads/utility.cc ../threads/copyright.h ../threads/utility.h \
  ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h \
  /usr/sww/lib/g++-include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h /usr/sww/lib/g++-include/string.h \
  /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h /usr/include/stdarg.h /usr/include/ansi_compat.h 
threadtest.o : ../threads/threadtest.cc ../threads/copyright.h ../threads/system.h \
  ../threads/utility.h ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h \
  /usr/sww/lib/g++-include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h /usr/sww/lib/g++-include/string.h \
  /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../threads/thread.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h ../machine/timer.h 
interrupt.o : ../machine/interrupt.cc ../threads/copyright.h ../machine/interrupt.h \
  ../threads/list.h ../threads/utility.h ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h /usr/sww/lib/g++-include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h \
  /usr/sww/lib/g++-include/string.h /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../threads/system.h ../threads/thread.h ../threads/scheduler.h \
  ../machine/stats.h ../machine/timer.h 
sysdep.o : ../machine/sysdep.cc ../threads/copyright.h /usr/sww/lib/g++-include/stdio.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h /usr/sww/lib/g++-include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h \
  /usr/sww/lib/g++-include/string.h /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h /usr/sww/lib/g++-include/signal.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/signal.h \
  /usr/sww/lib/g++-include/sys/types.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/sys/types.h \
  /usr/sww/lib/g++-include/time.h /usr/sww/lib/g++-include/_G_config.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/time.h \
  /usr/sww/lib/g++-include/sys/socket.h /usr/include/sys/socket.h /usr/sww/lib/g++-include/sys/file.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/sys/file.h /usr/include/sys/un.h \
  /usr/sww/lib/g++-include/sys/mman.h /usr/include/sys/mman.h ../machine/interrupt.h \
  ../threads/list.h ../threads/utility.h ../machine/sysdep.h ../threads/system.h \
  ../threads/thread.h ../threads/scheduler.h ../machine/stats.h ../machine/timer.h 
stats.o : ../machine/stats.cc ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
  /usr/sww/lib/g++-include/stdio.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h \
  /usr/sww/lib/g++-include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h /usr/sww/lib/g++-include/string.h \
  /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../machine/stats.h 
timer.o : ../machine/timer.cc ../threads/copyright.h ../machine/timer.h ../threads/utility.h \
  ../machine/sysdep.h /usr/sww/lib/g++-include/stdio.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdio.h \
  /usr/sww/lib/g++-include/stdarg.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stdarg.h \
  /usr/sww/lib/gcc-lib/decstation/2.3.3/include/va-mips.h /usr/sww/lib/g++-include/string.h \
  /usr/sww/lib/g++-include/stddef.h /usr/sww/lib/gcc-lib/decstation/2.3.3/include/stddef.h \
  /usr/sww/lib/g++-include/memory.h ../threads/system.h ../threads/thread.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h 
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
