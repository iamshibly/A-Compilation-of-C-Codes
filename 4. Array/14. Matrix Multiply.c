#include<stdio.h>
int main(){
int first[100][100], second[100][100], multy[100][100],sum=0, i,j,k,r1,c1,r2,c2;
printf("Enter the number of row and col of first matrix: ");
scanf("%d %d",&r1,&c1);
printf("Enter the number of row and col of second matrix: ");
scanf("%d %d",&r2,&c2);

while(c1!=r2){
    printf("Error!! column of first matrix is not equal to second matrix row\n");
    printf("Enter the number of row and col of first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of row and col of second matrix: ");
    scanf("%d %d",&r2,&c2);
}

printf("Enter elements for first matrix:\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
    printf("first[%d][%d]=",i,j);
        scanf("%d",&first[i][j]);
    }
    printf("\n");
}
printf("first matrix=\n");
for(i=0;i<r1;i++){
        printf("\t");
    for(j=0;j<c1;j++){
        printf("%d ",first[i][j]);
    }
    printf("\n");
}
printf("Enter elements for ssecond matrix:\n");
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
    printf("second[%d][%d]=",i,j);
        scanf("%d",&second[i][j]);
    }
    printf("\n");
}
printf("second matrix=\n");
for(i=0;i<r2;i++){
        printf("\t");
    for(j=0;j<c2;j++){
        printf(" %d ",second[i][j]);
    }
    printf("\n");
}
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        for(k=0;k<c1;k++){
            sum=sum+first[i][k]*second[k][j];
        }
        multy[i][j]=sum;
        sum=0;
    }
}
printf("multy=\n");
for(i=0;i<r1;i++){
        printf("\t");
    for(j=0;j<c2;j++){
        printf(" %d ",multy[i][j]);
    }
    printf("\n");
}
return 0;
}


