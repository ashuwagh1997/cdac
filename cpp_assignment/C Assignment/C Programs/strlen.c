/*find length of string using pointers*/

#include<stdio.h>
void main()
{
  int count=0,i;
  char str[50];
  
  printf("enter your string \n");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
   count=count+1;
    printf("length of string is %d",count);
}
