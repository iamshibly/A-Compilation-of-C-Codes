#include<stdio.h>
void pattern(n);
int main(){
int n=5;
pattern(n);
}
void pattern(n){
for(int i=1; i<=n; i++){
    for(int j=1;j<=2*i-1;j++){
        printf("*");
    }
printf("\n");
}
}
