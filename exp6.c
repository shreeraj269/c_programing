#include<stdio.h>
    /*name:shreeraj pisal
      div:c     branch:comps
      uin:251P041
      roll no.  :38*/

      void counter()
      {
      static int count = 0;
      count++;
      printf("number of time function is called is %d\n",count);
      }

      int main(){

      counter();
       counter();
 counter();
}
