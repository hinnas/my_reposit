#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
  printf("Thread id %ld\n",syscall(SYS_gettid));
  return 0;
  
}