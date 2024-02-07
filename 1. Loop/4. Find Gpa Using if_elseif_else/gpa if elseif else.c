#include<stdio.h>
int main(){
int Mark;
printf("Enter Mark: ");
scanf("%d", &Mark);
if(Mark>=80 && Mark<=100){
    printf("A+\n");
    printf("Outstanding\n");
}
else if(Mark>=75 && Mark<=79){
    printf("A\n");
    printf("Excellent\n");
}
else if(Mark>=70 && Mark<=74){
    printf("A-\n");
    printf("Quite Excellent\n");
}
else if(Mark>=65 && Mark<=69){
    printf("B+\n");
    printf("Very Good\n");
}
else if(Mark>=60 && Mark<=64){
    printf("B\n");
    printf("Good\n");
}
else if(Mark>=55 && Mark<=59){
    printf("B-\n");
    printf("Quite Good\n");
}
else if(Mark>=50 && Mark<=54){
    printf("C+\n");
    printf("Above Average\n");
}
else if(Mark>=45 && Mark<=49){
    printf("C\n");
    printf("Average\n");
}
else if(Mark>=40 && Mark<=44){
    printf("D\n");
    printf("Poor\n");
}
else if(Mark>=0 && Mark<=39){
    printf("F\n");
    printf("Fail\n");
}
else {
    printf("Out of Class Intervals of Scores");
}
return 0;
}

