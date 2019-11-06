/* sum of N integers using pointers */
#include<stdio.h>
int main()
{
  int n, i, sum = 0, integers[10];
  int *pointr;
  printf("How many integers to add : ");

  //How many numbers to be added
  scanf("%d", &n);
  printf("\n Give the integers one by one : ");
  for (i = 0; i < n; i++)
  scanf("%d", &integers[i]); 

  // Assigning Starting Address to Pointer Variable
  pointr = integers; 

  for (i = 0; i < n; i++)
 {
  sum = sum + *pointr;
  ++pointr;
   }
    printf("\n\n The sum of array integers : %d", sum);
 }
