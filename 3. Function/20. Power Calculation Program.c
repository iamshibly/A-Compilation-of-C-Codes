#include<stdio.h>
#include<math.h>
int main(){
double base,exp,result;
printf("enter both base and exp: ");
scanf("%lf %lf",&base,&exp);
result=pow(base,exp);
printf("The result is: %lf", result);
return 0;
}
