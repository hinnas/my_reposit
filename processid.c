#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
  printf("Process id %ld\n",syscall(SYS_getpid));
  return 0;
  
}