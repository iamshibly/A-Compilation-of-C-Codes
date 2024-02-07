#include<stdio.h>
void lol();
void gf();
void nul();
int main(){
printf("Enter character: ");
char fg;
scanf("%c", &fg);
if(fg=='i'){
    lol();
}
else if(fg=='u'){
     gf();
}
else{
    nul();
    }
    return 0;
}
void lol(){
printf("Indian\n");
printf("Namaste\n");
nul();
}
void gf(){
    lol();
printf("USA\n");
printf("Holla\n");
}
void nul(){
printf("Other nations\n");
printf("Other languages\n");
}

