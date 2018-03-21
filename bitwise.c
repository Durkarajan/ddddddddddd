#include <stdio.h>
int main()
{
int d=55;
int r=125;
printf("Value of d=%d r=%d before swapping\n",d,r);
d=d^r;
r=d^r;
d=d^r;
printf("Value of d=%d r=%d after swapping\n",d,r);
return 0;
}
