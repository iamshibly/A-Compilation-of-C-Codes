#include<stdio.h>
int main(){
int i;
for (i=0; i<10; i++) {
if (i==5)
{ goto lab200; }
 printf("%d " , i);
}
lab200:
    printf("WOW");
    return 0;
}
