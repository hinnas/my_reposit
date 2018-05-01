#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
  printf("Real User Id: %ld\n",syscall(SYS_getuid));
  return 0;
  
}