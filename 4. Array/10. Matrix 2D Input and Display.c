#include<stdio.h>
int main(){
    int i,j;
int a[3][4], b[3][4];
printf("Enter elements for A matrix:\n");
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}
printf("a=");
for(i=0;i<3;i++){
        printf("\t");
    for(j=0;j<4;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
return 0;
}
