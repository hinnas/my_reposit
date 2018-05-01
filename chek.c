#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char ch;
  fp=fopen("chk.txt","r"); 
  if(fp==NULL) 
  { 
    printf("ERROR"); 
    exit(1); 
  } 
  printf("Reading File content \n");
  do 
  {
    ch=fgetc(fp);
    putchar(ch);
    
  }
  while(ch!=EOF);
  fclose(fp);
  return 0;
}