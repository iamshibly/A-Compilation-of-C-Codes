#include <stdio.h>
int main(){
int a[6]={1,3,4,5,6,1};
int sum=0;

for(int i=0; i<=5; i++){
    printf("%d \n", a[i]);
}

for(int i=0; i<=5; i++){
    sum=sum+a[i];

}
printf("The sum is %d\n", sum);

printf("The avg is %f",(float)sum/6 );






return 0;
}
