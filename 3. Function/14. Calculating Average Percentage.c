#include<stdio.h>
#include<math.h>
float percentage(float Math,float Eng,float Bio);
int main(){
 float Math=90,Eng=85,Bio=75;
printf("Percentage= %f",percentage(Math,Eng,Bio));
printf("%%");
return 0;
}
float percentage(float Math,float Eng,float Bio){
float percentage=((Math+Eng+Bio)/3.0);
return percentage;
}

