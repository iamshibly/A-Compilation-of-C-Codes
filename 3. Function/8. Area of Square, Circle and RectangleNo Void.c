#include<stdio.h>
#include<math.h>
float square(float side);
float circleArea(float radius);
float rectangleArea(float a,float b);
int main(){
float side=20,radius=5.0,a=25.0,b=4;
printf("Square is: %f\n", square(side));
printf("Area of circle: %f\n", circleArea(radius));
printf("Area of rectangle: %f",rectangleArea(a,b));
return 0;
}
float square(float side){
return pow(side,2.0);
}
float circleArea(float radius){
return 3.14*pow(radius,2.0);
}
float rectangleArea(float x,float y){
return x*y;
}

