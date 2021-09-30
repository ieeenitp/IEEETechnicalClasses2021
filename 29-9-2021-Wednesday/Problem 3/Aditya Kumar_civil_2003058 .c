#include<stdio.h>

 #include<conio.h> 

int main() 

{ char c; 

int ascii; 

printf("Enter a character: "); 

scanf("%c", &c); 

ascii = c; 

printf("ASCII value of %c is: %d\n",c,ascii); 

if (ascii >= 65 && ascii <= 90) 

printf("%c is a capital letter",c); 

else if (ascii >= 97 && ascii <=122) 

printf("%c is a small letter",c); 

else if (ascii >=48 && ascii <= 57) 

printf("%c is a digit",c); 

else if (ascii>=0 && ascii<=47 || ascii>=58 && ascii<=64 || ascii>=91 && ascii<=96 || ascii>=123 && ascii<=127) 

printf("%c is a special symbols",c); 

return 0;

}

    
