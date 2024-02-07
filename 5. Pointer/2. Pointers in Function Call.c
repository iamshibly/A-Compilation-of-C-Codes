#include<stdio.h>
void square(int n){//without pointers
    n=n*n;
    printf("square= %d\n", n);
}
void sssquare(int *n){//with pointers
    *n=(*n)*(*n);//in pointer and this arithmatic, we will keep the previous location same but using call by reference, we will change the value of number from 4 to 16. But in normal pointer less function the value of number does not change.(here we are taking about number not square)
    printf("square= %d\n", *n);
}

int main(){
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    square(number);
    printf("Number= %d\n",number);
    sssquare(&number);
    printf("Number= %d\n",number);
    return 0;
}
