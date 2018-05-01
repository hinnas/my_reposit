#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("LS_COLORS:%s\n",getenv("LS_COLORS"));
  printf("Path:%s \n",getenv("PATH"));
   printf("Home:%s \n",getenv("HOME"));
   printf("Root:%s \n",getenv("ROOT"));
   printf("Mail:%s \n",getenv("MAIL"));
   printf("Shell:%s \n",getenv("SHELL"));
   printf("Term:%s \n",getenv("TERM"));
   printf("Users:%s \n",getenv("USERS"));
   printf("Path:%s \n",getenv("PATH"));
}