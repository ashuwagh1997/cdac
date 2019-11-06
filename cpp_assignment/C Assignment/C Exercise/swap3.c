/*swap two numbers using function method (call by reference) */
#include <stdio.h>
void swap(int*, int*);
int main()
{
 int a,b;
 printf("enter two integers \n");
 scanf("%d%d",&a,&b);
 printf("\n before swapping:\n First Integer=%d \n Second Integer=%d",a,b);
 swap(&a,&b);
 printf("\n After swapping:\n First integer=%d \n Second integer=%d",a,b);
 }
 return 0;
 
 void swap(int a,int b)
 {
  int t;
  t=*b;
  *b=*a;
  *a=*t;
 }

