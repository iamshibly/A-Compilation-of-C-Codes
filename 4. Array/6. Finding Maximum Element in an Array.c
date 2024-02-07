#include<stdio.h>
int maximum(int x[]){

    int max=x[0];
for(int i=1; i<=4; i++){
        if(max<x[i]){}
        max=x[i];
}
        return max;
}
int main(){
int num[]={1,4,9,14,17};
int max=maximum(num);
printf("The max= %d", max);
return 0;
}

