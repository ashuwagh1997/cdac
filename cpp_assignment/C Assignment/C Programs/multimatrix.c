/* matrix multiplication*/
#include<stdio.h>
int main()
{
 int m,n,p,q,c,d,k,sum=0;
 int array1[10][10],array2[10][10],multi[10][10];
 printf("\n enter the order of first matrix:");
 scanf("%d%d",&m,&n);
 printf("\n enter the elements of first matrix\n");
 for(c=0;c<m;c++)
  for(d=0;d<n;d++)
   scanf("%d",&array1[c][d]);
  
  printf("\n enter the order of the second matrix\n");
  scanf("%d%d",&p,&q);
 
  if(n==p)
 {
  {
  printf("\n enter the elements of second matrix\n");
  for(c=0;c<p;c++)
   for(d=0;d<q;d++)
    scanf("%d",&array2[c][d]);
   }
  
   for(c=0;c<m;c++)
  {
   for(d=0;d<n;d++)
   {
    for(k=0;k<p;k++)
    {
     sum=sum+array1[c][k]*array2[k][d];
     }
     multi[c][d]=sum;
     sum=0;
    }
   }
  printf("\n multiplication:\n");
  for(c=0;c<m;c++)
  {
  for(d=0;d<n;d++)
   printf("%d\t",multi[c][d]);
   
   printf("\n");
 }
}

 else
  printf("\n matrix cannot be multiplied");
}

 
  
