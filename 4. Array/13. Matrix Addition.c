#include<stdio.h>
int main(){
int a[100][100], b[100][100], sum[100][100], i ,j, row,col;
printf("Enter the number of row and col: ");
scanf("%d %d",&row,&col);
printf("Enter elements for A matrix:\n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}
printf("a=");
for(i=0;i<row;i++){
        printf("\t");
    for(j=0;j<col;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("Enter elements for B matrix:\n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    printf("b[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);
    }
    printf("\n");
}
printf("b=");
for(i=0;i<row;i++){
        printf("\t");
    for(j=0;j<col;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
}

for(i=0;i<row;i++){
    for(j=0;j<col; j++){
        sum[i][j]=a[i][j]+b[i][j];
          }
}
printf("a+b=");
for(i=0;i<row;i++){
        printf("\t");
    for(j=0;j<col;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}
return 0;
}

