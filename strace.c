#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  int i;
  uint32 mask = 22;

  if(argc < 2){
    printf(2, "usage: strace program...\n");
    exit();
  }
  ptrace(mask);
  exit();
}
