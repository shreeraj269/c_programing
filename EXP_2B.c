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
    int a,b,sum=0;
    printf("Enter a number=");
    scanf("%d",&a);
    printf("Enter a number=");
    scanf("%d",&b);
    if(a%2==0)
    a++;
    do
    {
    sum=a+sum;
    a=a+2;
    }
    while(a<=b);
    {
    printf("Sum of odd numbers \n%d",sum);
    }
}
