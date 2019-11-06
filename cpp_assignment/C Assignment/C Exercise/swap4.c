/*swap two numbers using pointers */
#include <stdio.h>
void main()
{
 int x,y,t,*a,*b;
 printf("enter two integers \n");
 scanf("%d%d",&x,&y);
 printf("\n before swapping:\n First Integer=%d \n Second Integer=%d",x,y);
 a=&x;
 b=&y;
 t=*b;
 *b=*a;
 *a=t;
 printf("\n After swapping:\n First integer=%d \n Second integer=%d",x,y);
 }
