#include<stdio.h>

void main(){

int x,y;
int swap;
int *num1,*num2;


printf("enter any number X =");
scanf("%d",&x);
printf("enter any number Y =");
scanf("%d",&y);

num1 = &x;
num2 = &y;

swap = *num1;

*num1 = *num2;
*num2 = swap;
printf("swap  A = %d & B = %d",x,y);

}
