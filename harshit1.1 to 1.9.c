#include<stdio.h>
#include<conio.h>
int main()
{

int a,b,c,x,y,z;
a=10;
b=60;
c=a+b;
printf("Add is %d \n", c);
x=a*b;
printf("multiply is %d \n ",x);
y=b/a;
printf("divide is %d\n ", y);
z=a-b;
printf("subtract  is %d\n ", z);
int hours;
int minutes;
printf("enter hours:");
scanf("%d", &hours);
minutes= hours*60;
printf("minutes %d\n", minutes);
int dollors;
int rs;
printf("enter dollors:");
scanf("%d", &dollors);
rs=dollors*48;
printf("rs %d\n", rs);
return 0;
}
