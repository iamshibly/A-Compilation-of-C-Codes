#include<stdio.h>
void FF(int count);
int main(){

FF(10);
return 0;
}
void FF(int count){
if(count==0){
    return;
}
    printf("ASDFGH\n");
FF(count-1);
}

