
#include "strings.h"
#include "syscall.h"

int main() {
  int s;
  int rc;

  s = Exec("../test/vm.noff");
  rc = Join(s);

  Halt();

  /* not reached */
}
