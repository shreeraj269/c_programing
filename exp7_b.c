#include<stdio.h>
    /*name:shreeraj pisal
      div:c     branch:comps
      uin:251P041
      roll no.  :38*/

      void addmatrix(int mat1[2][2],int mat2[2][2],int sum[2][2])
{
      int i,j;
      for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
      sum[i][j]=mat1[i][j]+mat2[i][j];
      }
    }
}

   int main(){
   int m1[2][2],int m2[2][2],result[2][2];
      int i,j;
      printf("enter the value of first matrix \n");
      for(i=0;i<2;i++){
      for(j=0;j<2;j++){
      scanf("%d",&m1[i][j]);
      }
    }

     printf("enter the value of second matrix \n");
      for(i=0;i<2;i++){
      for(j=0;j<2;j++){
      scanf("%d",&m2[i][j]);
      }
    }

    addmatrix(m1,m2,result);
     printf("print result \n");
      for(i=0;i<2;i++){
      for(j=0;j<2;j++){
     printf("%d\t",result[i][j]);
      }
    }

}
