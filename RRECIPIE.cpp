#include <stdio.h>
#include <string.h>


int main(){
  int test=0;
  scanf("%d", &test);
  char str[500000];
  while (test > 0) {
    scanf("%s", str);
    int len = strlen(str);
    int i=0,j = len-i-1;
    int ans=1;
    while (i <=  j) {
        j=len-i-1;
        if(str[i]=='?'){
          if (str[j]=='?' && i<=j) {
            ans=ans*26;
          }

        }
        else{
          if (str[j] == '?') {
            ans=ans*1;
          }

          else if (str[i]!=str[j]) {
            ans=0;
            break;
          }
        }

        i++;
    }
    printf("%d\n",ans);


    test--;
  }

}
