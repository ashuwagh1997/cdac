/*program to reverse a string using pointers*/
#include<stdio.h>
int strlen(char*);
void reverse(char*);
void main()
{
 char s[100];
 printf("\n enter the string\n");
 gets(s);
 reverse(s);
 printf("\n reverse of the string is \"%s\",\n",s);
 }

 void reverse(char *s)
 {
  int length,c;
  char *begin,*end,temp;
  length=strlen(s);
  begin=s;
  end=s;
  for(c=0;c<length-1;c++)
  end++;
  for(c=0;c<length/2;c++)
 {
  temp=*end;
  *end=*begin;
  *begin=temp;
  
  begin++;
  end--;
  }
}

int strlen(char *p)
 {
  int c=0;
  while(*(p+c)!='\0')
  c++;
 }

