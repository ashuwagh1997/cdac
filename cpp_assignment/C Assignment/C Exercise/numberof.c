/*program to count number of words,vowels,characters and white spaces*/
#include<stdio.h>
int main()
{
 char words[200];
 int vowels=0,w=0,digits=0,spaces=0;
 int count=0,i;
 printf("\n enter a sentence");
 gets(words);
  for(i=0;words[i]!='\0';++i)
  {
    if(words[i]=='a'|| words[i]=='e'|| words[i]=='i'|| words[i]=='o'||words[i]=='u'||words[i]=='A'||words[i]=='E'||words[i]=='O'||words[i]=='U')
    ++vowels;
    else
       if(words[i]>='0'&& words[i]<='9')
       ++digits;
    if(words[i]==' ')
    {
     ++spaces;
     count=0;
    }
     if(words[i]!=' '&&count==0)
    {
     ++w;
     count=1;
    }
   }
  printf("\n number of words:%d",w);
  printf("\n number of digits:%d",digits);
  printf("\n number of vowels:%d",vowels);
  printf("\n number of white spaces:%d",spaces);
  printf("\n number of characters:%d",i);
 }
