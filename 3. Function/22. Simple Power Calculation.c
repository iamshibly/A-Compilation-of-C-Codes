#include<stdio.h>
double calpow(double base,double exp);

int main(){
double base,exp;
printf("enter both base and exp: ");
scanf("%lf %lf",&base,&exp);
calpow(base,exp);
return 0;
}
double calpow(double b,double e){
double result=1,i;
for(i=1;i<=e;i++){
    result=result*b;
}
printf("The answer: %lf",result);

}

