#include <stdio.h>
#include <math.h>


unsigned long long int digit(unsigned long long int t,unsigned long long int n,unsigned long long int i){
	unsigned long long int valPow=n-i;
	unsigned long long int divi=pow(10,valPow);
	unsigned long long int d;
	if(divi > 0) d= t/divi;
	return d%10;
}


int main(){
	int test;
	scanf("%d",&test);
	while(test > 0){
		unsigned long long int n;
		unsigned long long int t;
		scanf("%llu",&n);
		scanf("%llu",&t);
		unsigned long long int i=0;
		unsigned long long int ans=0;
		unsigned long long int no1=0;
		while(i<=n){
			unsigned long long int vall=digit(t,n,i);
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