/* program to create a random file for student details such as a roll no.,name,branch and year with following updating operation- create,read*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 FILE *fptr;
 char name[50],branch[50];
 int rollno,y,i,n;
  printf("\n enter the total number of students: ");
 scanf("%d",&n);
 fptr=fopen("student3.txt","w"); //writing into a file
 if(fptr==NULL)
 {
  printf("Error!");
  exit(0);
  }
  fprintf(fptr,"\nName\tRollNo.\tBranch\tYear\n");

 for (i=0;i<n;i++)
 {
  printf("\n student%d: ",i+1);
  printf("\n Enter name: ");
  scanf("%s",name);
  printf("\n Enter roll number: ");
  scanf("%d",&rollno);
  printf("\n Enter branch:");
  scanf("%s",branch);
  printf("\n Enter year: ");
  scanf("%d",&y);
  fprintf(fptr,"%s\t%d\t%s\t%d \n",name,rollno,branch,y);
   }
 
 fclose(fptr);
 fptr=fopen("student3.txt","r"); //reading a file
 fprintf(fptr,"%s\t%d\t%s\t%d \n",name,rollno,branch,y);
 fclose(fptr);
 }

