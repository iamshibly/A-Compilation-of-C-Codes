#include<stdio.h>
int main(){
    int x=3,y=5;
    swap(x,y);
    printf("x= %d y= %d\n",x,y);
    sswap(&x,&y);
    printf("x= %d y= %d\n",x,y);
return 0;
}
void swap(int a, int b){//call by value
    int t=a;
    a=b;
    b=t;
    printf("a= %d b=%d\n",a,b);
}
void sswap(int *a, int *b){//call by reference
    int t=*a;
    *a=*b;
    *b=t;
    printf("a= %d b=%d\n",*a,*b);
}
