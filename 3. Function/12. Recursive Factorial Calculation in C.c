#include<stdio.h>
int fact(int n);
int main(){
printf("Factorial is %d", fact(5));
return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
int factof1to5=fact(n-1);
int factofN=factof1to5*n;
return factofN;
}



