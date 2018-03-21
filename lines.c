#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char str[100];
int i=0,r=0,d=1;
clrscr();
puts("Enter any string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
r=r+1;
}
printf("The number of characters in the string are %d\n",r);
for(i=0;i<=r-1;i++)
{
if(str[i]==' ')
{
d=d+1;
}
}
printf("The number of words in the string are %d",d);
getch();
}
