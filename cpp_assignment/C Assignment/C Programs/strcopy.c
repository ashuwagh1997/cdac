/*copy string using pointers*/
#include<stdio.h>
int copy(char*, char*);
int main()
{
 char s[100],t[100];
 printf("\n enter the string");
 gets(s);
 copy(t,s);
 printf("\n strings are copied:\"%s\"\n",t);
 }

 int copy(char *t, char *s)
 {
  while(*s)
  {
   *t=*s;
    s++;
    t++;
    }
   *t='\0';
  }
 
