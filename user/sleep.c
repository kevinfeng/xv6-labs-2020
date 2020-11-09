#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if (argc != 2) {
    write(2, "usage: sleep number-of-ticks", strlen("usage: sleep number-of-ticks"));
    exit(1);
  }

  int t = atoi(argv[1]);
  sleep(t);

  exit(0);
}