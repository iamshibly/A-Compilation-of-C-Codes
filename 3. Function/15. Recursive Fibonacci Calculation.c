#include<stdio.h>
int fib(int n);
int main(){
printf("The number is: %d", fib(6));
return 0;
}
int fib(int n){
    if(n==0||n==1){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
    }
int fibNum1=fib(n-1);
int fibNum2=fib(n-2);
int fibN=fibNum1+fibNum2;
return fibN;
}

