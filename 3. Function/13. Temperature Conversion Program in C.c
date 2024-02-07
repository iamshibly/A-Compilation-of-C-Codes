#include<stdio.h>
#include<math.h>
float convert(float celcius);
int main(){
 float celcius=37.0;
printf("Fahrenheit= %f",convert(celcius));
return 0;
}
float convert(float celcius){
float Fahrenheit=celcius*(9.0/5)+32;
return Fahrenheit;
}
