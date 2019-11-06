/* transpose matrix*/
#include<stdio.h>
void main()
{
 int matrix[10][10],transpose[10][10];
 int i,j,m,n;
 printf("enter the order of the matrix\n");
 scanf("%d%d",&m,&n);

 //storing the elements
 printf("enter the elements of the matrix \n");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   scanf("%d",&matrix[i][j]);


 //finding the transpose
 for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     transpose[j][i]=matrix[i][j];


 //printing the transpose of a matrix
  printf("transpose of matrix is\n");
   for(j=0;j<n;j++)
    {
    for(i=0;i<m;i++)
    printf("%d\t",transpose[j][i]);
    printf("\n");
    }
 
}
