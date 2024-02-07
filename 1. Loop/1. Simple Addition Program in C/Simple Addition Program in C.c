#include <stdio.h>
int main()
{
int num1,num2,sum; // good practice to initialize
printf("Enter Numbers : \n");
scanf ("%d", &num1); //& means memory location
scanf ("%d", &num2);
sum=num1 + num2;
printf("The sum is %d", sum);
return 0;
}

