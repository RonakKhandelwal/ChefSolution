#include <stdio.h>
#include <string.h>

int ans(char a[],char b[]){
  int i=0,j=0;
  while (a[j]!='\0' && b[i]!='\0') {
    if(a[j] == b[i]){
      j++;
    }
    i++;
  }
  if (a[j] == '\0') {
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int test;
  scanf("%d", &test);

  while (test >0) {
    char a[25001],b[25001];
    scanf("%s %s",a,b);
    int la=strlen(a);
    int lb=strlen(b);
    int al=0;
    if(la > lb){
       al=ans(b,a);
    }
    else{
      al=ans(a,b);
    }
    if (al == 0) {
      printf("%s\n", "NO");

    }
    else if (al == 1) {
      printf("%s\n", "YES");
    }
    else{
      printf("%s\n", "NO");
    }

    test--;
  }
}
