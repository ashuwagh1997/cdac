/*program to generate student mark list using to pass a structure to a function*/
#include<stdio.h>
struct student
{
 char name[50];
 int rollno,tot;
 }s1;

int main()
{
 int i,n;
 printf("\n Enter the number of students for entry");
 scanf("%d",&n);
 printf("\n Enter the informatin of students:\n");
 for(i=0;i<n;i++)
 {
  printf("\n enter name:");
  scanf("%s",s1.name);
  printf("\n enter roll number:");
  scanf("%d",&s1.rollno);
  printf("\n enter total marks:");
  scanf("%d",&s1.tot);
  //return s1;
 }

 printf("\n Displaying Information: %d\n",i+1);
 for(i=0;i<n;i++)
 {
 printf("\n Name: %s",s1.name);
 printf("\n Roll number:%d",s1.rollno);
 printf("\n Marks:%d",s1.tot);
 }
 }
