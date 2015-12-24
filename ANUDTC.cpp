#include <stdio.h>



int main(){
  int test;
  scanf("%d",&test);

  while(test >0){
      int val;
      scanf("%d",&val );
      char ans1='n',ans2='n',ans3='n';

      if(360%val==0){
        ans1='y';
      }
      if (val <= 360) {
        ans2='y';
      }
      if((val*(val+1)/2) <= 360){
        ans3='y';
      }
      printf("%c %c %c\n",ans1,ans2,ans3 );


    test--;
  }

}
