#include<stdio.h>
#include<math.h>
int main(){
double base,exp,result=1,i;
printf("enter both base and exp: ");
scanf("%lf %lf",&base,&exp);
for(i=1;i<=exp;i++){
    result=result*base;
}
printf("The answer: %lf",result);
return 0;
}



