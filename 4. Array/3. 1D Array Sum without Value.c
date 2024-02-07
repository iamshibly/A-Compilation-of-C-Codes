#include <stdio.h>
int main(){
int n;
int a[10],sum=0;


printf("Enter a positive integer for n: ");
scanf("%d", &n);
for(int i=0; i<=n-1; i++){
    scanf("%d", &a[i]);
}

for(int i=0; i<=n-1; i++){
    sum=sum+a[i];

}
printf("The sum is %d\n", sum);

printf("The avg is %f",(float)sum/n );






return 0;
}
