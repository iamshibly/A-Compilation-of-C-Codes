#include<stdio.h>
void print(int num[]);

int main(){
int num[]={1,4,9,14,17};
print(num);
return 0;
}
void print(int x[]){
for(int i=0; i<=4; i++){
    printf("%d ", x[i]);
}
}
