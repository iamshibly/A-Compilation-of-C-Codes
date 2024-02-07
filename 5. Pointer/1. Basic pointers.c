#include<stdio.h>
int main(){
    int age=50;
    int *joss;
    joss=&age;
    printf("%p\n",&age);
    printf("%p\n",joss);
    printf("%p\n",&joss);
    printf("%u\n",&age);
    printf("%u\n",joss);
    printf("%u\n",&joss);
    printf("%d\n",age);
    printf("%d\n",*joss);
    printf("%d\n",*(&age));
    *joss=10;
    printf("x= %d\n",age);
    printf("*joss= %d\n",*joss);
    *joss+=5;
    printf("x= %d\n",age);
    printf("*joss= %d\n",*joss);
    float price=100.00;
    float *ptr=&price;
    float **pptr=&ptr;
    printf("%u\n",&price);
    printf("%u\n",&ptr);
    printf("%u\n",&pptr);

return 0;
}
