#include <stdio.h>
#include <stdlib.h>
char*inputString(size_t size)
{
char *str;
int ch;
size_t len = 0;
str=realloc(NULL,sizeof(char)*size);
if(!str)return str;
while(EOF!=(ch=fgetc(stdin))&&ch!='\n')
{
str[len++]=ch;
if(len==size){
str=realloc(str,sizeof(char)*(size+=16));
if(!str)return str;
}
}
str[len++]='\0';
return realloc(str,sizeof(char)*len);
}
int main(void)
{
char*e;
int times,i=0;
printf("input string : ");
e=inputString( 10);
printf("Number: ");
scanf("%d",&times);
for(i=0;i<times;i++)    
printf("%s ",e);   
free(e);
return 0;
}
