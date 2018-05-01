#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
  printf("Session Id: %ld\n",syscall(SYS_getsid));
  return 0;
  
}