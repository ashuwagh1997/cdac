/*find length of string using pointers*/
#include<stdio.h>
int strlen(char*);
int main()
{
 char s[100];
 int length;
 printf("\n enter the string");
 gets(s);
 length=strlen(s);
 printf("\n length of string is:%d",s,length);
 }

 int strlen(char *s)
 {
  int count=0;
  while(*s[count]!='\0')
  count++;
 }
 
 
