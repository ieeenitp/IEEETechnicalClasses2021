#include <stdio.h>

int main()

{

int r;

float b=0,a=1;

for(r=1;r<=7;r++)

{

 a=r*a;

 b=(r/a)+b;

}

printf( "sum of given series is %f",b);

return 0;

}

 output:- 2.718056
