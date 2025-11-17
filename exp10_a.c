#include<stdio.h>
    /*name:shreeraj pisal
      div:c     branch:comps
      uin:251P041
      roll no.  :38*/

     int addnumbers(int *a,int *b) {

     int add= *a + *b;
     return add;
     }

    int main(){

    int num1,num2,result;
     printf("enter the first numner :");
     scanf("%d", &num1);
    printf("enter second number :");
    scanf("%d", &num2);
   printf("result =%d",addnumbers(&num1,&num2));
return 0;
    }

