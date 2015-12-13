#include <stdio.h>
#include <math.h>

int isPrime(int a){
  if(a == 1)
    return 0;
  if(a % 2 == 0)
    return 0;
  int i=0;
  for(i=3;i<=floor(sqrt(a));i+=2){
    if(a % i == 0)
      return 0;
  }

  return 1;

}



int main(){
  int n=0;
  scanf("%d/n",&n);

  printf("%d/n",isPrime(n));



}
