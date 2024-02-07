#include<stdio.h>
void price(float value);
int main(){
float value=200.00;
price(value);
return 0;
}
void price(float value){
value=value+0.18*value;
printf("The value is: %f", value);
}
