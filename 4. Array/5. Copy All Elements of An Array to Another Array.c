#include<stdio.h>
int main(){
int array1[5]={2,4,6,9,11}, array2[5], i;
printf("array1: ");
for(i=0; i<5; i++){
    printf("%d ", array1[i]);
}
for(i=0; i<5; i++){
    array2[i]=array1[i];
}
printf("\narray2: ");
for(i=0; i<5; i++){
    printf("%d ", array2[i]);
}


return 0;}
