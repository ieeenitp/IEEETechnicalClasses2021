#include<stdio.h>
 int main()
 { int y, c=1; 
float i, x;
for(y=1; y<=6; y++) 
{ 
for(x=5.5; x<=12.5; x+=0.5)
 { 
 i = 2 + ( y+0.5*x); 
 printf("%d) i=%f, x=%f, y=%d \n", c++,i, x, y);
 }
} 
return 0; 
}
