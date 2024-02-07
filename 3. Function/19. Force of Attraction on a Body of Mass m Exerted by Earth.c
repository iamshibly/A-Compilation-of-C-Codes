#include<stdio.h>
float force(float mass);
int main(){
printf("The force is: %f", force(56.78));
printf("N");
return 0;
}
float force(float mass){
float force=9.8*mass;
return force;
}
