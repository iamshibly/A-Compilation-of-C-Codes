#include<stdio.h>
int main(){
char Ch;
printf("enter Ch:");
scanf("%c",&Ch);
if(Ch>='a'&& Ch<='z'){
    printf("Lower Case\n");
}
else if(Ch>='A'&& Ch<='Z'){
    printf("Upper Case\n");
}
else{
    printf("Not English Character");
}


return 0;

}
