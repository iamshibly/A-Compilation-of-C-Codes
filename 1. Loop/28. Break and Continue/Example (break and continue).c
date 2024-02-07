#include<stdio.h>
int main(){
int i;
for (i=0; i<15; i++)
{ printf("CSE \n");
if (i==5 || i==8 || i==12)
 {continue;}
 printf("hello \n");
 if (i==10)
 {break;}
 printf("%d " , i);
}
printf("SEU");
return 0;}
