#include<stdio.h>
int sum(int a,int b);
int main(){
int a,b;
printf("enter a and b: ");
scanf("%d %d",&a,&b);
int adittion=sum(a,b);
printf("Sum is = %d",adittion);

return 0;
}
int sum(int x,int y){

return x+y;
}
