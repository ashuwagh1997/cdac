#include <stdio.h>
#include <stdlib.h>
int main()
{
   char name[50];
   int id, i, num,address;
   printf("Enter number of employees: ");
   scanf("%d", &num);
   FILE *fptr;
   fptr = (fopen("C:\\employee1.txt", "a"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
   for(i = 0; i < num;++i)
   {
      printf("For employee%d\nEnter name: ",i+1);
      scanf("%s", name);
      printf("Enter id: ");
      scanf("%d", &id);
      printf("Enter the address:");
      scanf("%d",&address);
      fprintf(fptr,"\nName: %s \nid:%d \naddress:%d \n", name, id, address);
   }
   fclose(fptr);
   return 0;
}
