
#include<stdio.h>
int sum(int n);
int main(){
printf("Sum is %d",sum(10));
return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
int sumof1to9=sum(n-1);
int sumofN=sumof1to9+n;
return sumofN;
}

