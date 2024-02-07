#include<stdio.h>
#include<math.h>
void square(float side);
void circleArea(float radius);
float rectangleArea(float a,float b);
int main(){
float side=20,radius=5.0,a=25.0,b=4;
square(side);
circleArea(radius);
printf("Area of rectangle: %f",rectangleArea(a,b));
return 0;
}
void square(float side){
printf("Square is: %f\n",pow(side,2.0));
}
void circleArea(float radius){
printf("Area of circle: %f\n", 3.14*pow(radius,2.0));
}
float rectangleArea(float x,float y){
return x*y;
}
