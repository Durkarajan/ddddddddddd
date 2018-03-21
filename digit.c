#include <stdio.h>
int main()
{
long long d;
int count=0;
printf("Enter an integer:");
scanf("%lld",&d);
while(d!=0)
{
d/=10;
count++;
}
printf("Number of digits:%d",count);
}
