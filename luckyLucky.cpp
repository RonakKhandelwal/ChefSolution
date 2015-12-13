#include <stdio.h>

int main(){
  int test;
  scanf("%d",&test );

  while(test >0 ){
    int n;
    scanf("%d",&n);
    if(n % 7 == 0){
      printf("%d\n",n);
    }
    else{
      int no7 = n%7;
      int no4 = n-no7;
      while ((no4 >= 0) && (no7 >= 0) && (no4 % 7 != 0 || no7 % 4 != 0)) {
        no4-=7;
        no7+=7;
      }
      if (no4 < 0 || no7 <0) {
        printf("%s\n","-1");
      }
      else{
        printf("%d\n",no4 );
      }

    }
    test--;
  }

}
