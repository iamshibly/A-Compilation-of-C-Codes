#include<stdio.h>
int main(){
int i,n=5,col,row, count=1;;
for(row=1; row<=n; row++){
    for(col=1; col<=row; col++){
            printf("%d ", count);
            count = !count;
        }
        count = i % 2;
        printf("\n");
}

return 0;
}
