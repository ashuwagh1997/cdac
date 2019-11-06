#include<stdio.h>
#include<string.h>
void main()
{
char str[200];
int i,vowel=0,consonent=0,digit=0,white_spaces=0,special_characters=0;
printf("Enter the string\n");

scanf("%[^\n]",str);

printf(" length of string:%d",strlen(str));
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
{
vowel++;
}
else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
{
consonent++;
}
else if(str[i]>='0' && str[i]<='9')
{
digit++;
}
else if(str[i]==' ')
{
white_spaces++;
}
else
{
special_characters++;
}
}
printf("\nvowel=%d",vowel);
printf("\nconsonent=%d",consonent);
printf("\ndigit=%d",digit);
printf("\nwhite_spaces=%d",white_spaces);
printf("\nspecial_characters=%d",special_characters);

}

