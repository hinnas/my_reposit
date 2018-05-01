#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
  printf("Real group ID: %ld\n",syscall(SYS_getgid));
  return 0;
  
}