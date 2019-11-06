/* program to copy one file to another */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
{
 char sentence[100];
 char ch,sfile[100],tfile[100];
 FILE *s,*t;
 FILE *fptr;
 fptr=fopen("program.txt","w");
 if(fptr== NULL)
 {
  printf("Error!");
  exit(0);
  }
  printf("enter a sentence\n");
  gets(sentence);
  fprintf(fptr,"%s",sentence);
  fclose(fptr);

 printf("file to copy\n");
 s=fopen("program.txt","r");
 if(fptr==NULL)
{
 printf("Error!");
 exit(0);
 }

 printf("enter name of target file\n");
 gets(tfile);
 t=fopen(tfile,"w");
 {
 while ((ch=fgetc(fptr))!=EOF)
 {
 fputc(ch,t);
 //ch=fgetc(fptr);
 }
 }
 printf("file copied successfully");
 fclose(fptr);
 fclose(t);
 }
