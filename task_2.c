#include<stdio.h>
int main(){

/*  name:shreeraj
    UIN:251P041
    branch:computer engineering
    division: c
*/

int num1,num2,num3;
printf("\t Enter physics marks \n");
scanf("%d",&num1);
printf("\t  Enter chemistry marks\n");
scanf("%d",&num2);
printf("\t  Enter maths marks\n");
scanf("%d",&num3);

printf("\t physics marks: %d\n",num1);
printf("\t chemistry marks: %d\n",num2);
printf("\t maths marks: %d\n",num3);

float    average=(num1+num2+num3)/3.0 ;

printf("\t student percentage: %f\n",average);

printf(average>=50?"you are eligible for admission":"you are not eligible for admission");




    return 0;
}
