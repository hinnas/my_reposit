#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
  printf("Parent process Id %ld\n",syscall(SYS_getppid));
  return 0;
  
}