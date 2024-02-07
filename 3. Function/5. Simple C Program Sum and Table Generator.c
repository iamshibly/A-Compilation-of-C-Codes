#include<stdio.h>
int sum(int a,int b);
void table(int n);
int main(){
int a,b,n;
printf("enter a, b, n: ");
scanf("%d %d %d",&a,&b, &n);
int adittion=sum(a,b);
printf("Sum is = %d\n",adittion);
printf("Table of n: \n");
table(n);
return 0;
}
int sum(int x,int y){

return x+y;
}
void table(int n){
for(int i=1; i<=10; i++){
    printf("%d\n", i*n);
}
}

