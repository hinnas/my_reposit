#include<sys/types.h> 
#include<sys/syscall.h> 
#include<unistd.h> 
#include<stdio.h> 
int main(int argc,char *argv[]) 
{ 
  char *getenv(); 
  FILE *fp; 
  fp=fopen("chk.txt","w"); 
  if(fp==NULL) 
  { 
    printf("ERROR!! EMPTY\n"); 
    return 0; 
  } 
  
  printf("Process Id: %d\n",getpid()); 
  fprintf(fp,"\n\tThe process ID:%d",getpid()); 
  printf("Thread id: %ld\n",syscall(SYS_gettid)); 
  fprintf(fp,"\n\tThe Thread ID:%ld",syscall(SYS_gettid)); 
  printf("HOME: %s\n",getenv("HOME")); 
  fprintf(fp,"\n\tHOME: %s",getenv("HOME")); 
  printf("PATH: %s\n",getenv("PATH")); 
  fprintf(fp,"\n\tThe PATH: %s",getenv("PATH")); 
  
 return 0; 
}

