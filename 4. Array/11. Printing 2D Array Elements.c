#include<stdio.h>
int main(){
    int i,j;
int a[3][4]={{2,3,5,7},{11,13,15,16},{3,99,90,45}};
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}


return 0;
}
