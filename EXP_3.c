/*
Shreeraj Pisal
FE Computers
DIV C
UIN 251P041
Roll no. 38
*/
#include<stdio.h>
int main()
{
float a,b;
int c,d,e;
start:
printf("Enter First Number=");
scanf("%f",&a);
printf("Enter Second Number=");
scanf("%f",&b);

printf("1.Addition \n");
printf("2.Subtraction \n");
printf("3.Multiplication \n");
printf("4.Division \n");
printf("5.Modules \n");

printf("Enter Operation=");
scanf("%d",&c);

switch(c)
{
case 1:
printf("Addition=%f \n\n",a+b);
break;
case 2:
printf("Subraction=%f \n\n",a-b);
break;
case 3:
printf("Multiplication=%f \n\n",a*b);
break;
case 4:
printf("Division=%f \n\n",a/b);
break;
case 5:
d=a;
e=b;
printf("Modules= %d \n\n",d%e);
break;
}
goto start;
}
