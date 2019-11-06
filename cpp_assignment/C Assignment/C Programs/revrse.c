/* WAP for reverse string using without string function */

#include<stdio.h>
#include<string.h>

void main()
{
  int i,n;
  char str[20];
  printf("enter the string to get reversed\n");
  scanf("%s",str);
  n=strlen(str);
  printf("\n reversed string is \n");
  for(i=n;i>=0;i--)
 {
   printf("%c",str[i]);
 }
}

