#include <stdio.h>
#include <math.h>


int digit(int t,int n,int i){
	int valPow=n-i;
	int divi=pow(10,valPow);
	int d= t/divi;
	return d%10;
}


int main(){
	int test;
	scanf("%d",&test);
	while(test > 0){
		int n;
		int t;
		scanf("%d",&n);
		scanf("%d",&t);
		int i=0;
		unsigned long long int ans=0;
		int no1=0;
		while(i<=n){
			int vall=digit(t,n,i);
			if (vall == 1)
			{
				no1++;
			}
			i++;
		}
		ans=(unsigned long long int)(no1*(no1+1)/2);
		
		printf("%llu\n",ans);


		test--;
	}
}