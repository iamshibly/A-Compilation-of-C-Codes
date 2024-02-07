#include<stdio.h>
int main(){
int number;
printf("enter number:");
scanf("%d", &number);

if(number>=0){
    printf("Positive\n");
    if(number%2==0 && number>1){
        printf("Even\n");
    }
    else if(number==0){
        printf("Neither even or odd");
    }
    else{
        printf("Odd\n");
    }
}
else{
    printf("Negative\n");
}
return 0;
}
