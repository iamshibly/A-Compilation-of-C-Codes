#include<stdio.h>
int main(){
int a[]={3,5,8,9,11,13,12};
int i,value,pos=-1;
printf("enter value: ");
scanf("%d", &value);
for(i=0;i<7;i++){
    if(value==a[i]){
        pos=i+1;
        break;
    }
}
if(pos==-1){
    printf("the value is not there");
}
else{
    printf("The value is found at %d position", pos);
}

return 0;
}
