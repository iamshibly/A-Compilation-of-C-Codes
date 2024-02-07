#include<stdio.h>
int main(){
int Day, Month;
printf("Enter Day:");
scanf("%d", &Day);

switch(Day){
case 1:printf("Monday\n");
break;
case 2:printf("Tuesday\n");
break;
case 3:printf("Wednesday\n");
break;
case 4:printf("Thursday\n");
break;
case 5:printf("Friday\n");
break;
case 6:printf("Saturday\n");
break;
case 7:printf("Sunday\n");
printf("Enter Month:");
scanf("%d", &Month);
switch(Month){
case 1: printf("2022\n");
break;
case 2: printf("2023\n");
break;
default: printf("2021\n");
break;
}
default:printf("Invalid");
}




return 0;
}

