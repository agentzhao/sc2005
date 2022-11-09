#include "ipt.h"
#include "syscall.h"
#include "system.h"
#include "thread.h"

//----------------------------------------------------------------------
// MemoryTable::MemoryTable
//      set invalid
//----------------------------------------------------------------------

MemoryTable::MemoryTable(void) { valid = FALSE; }

//----------------------------------------------------------------------
// MemoryTable::~MemoryTable
//      null body
//----------------------------------------------------------------------

MemoryTable::~MemoryTable(void) {
  // null body
}
