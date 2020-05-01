// Write your code here
#include<stdio.h>
int main()
{
	long long unsigned int a,b,result=1;
	scanf("%lld %lld",&a,&b);
	while(b>0)
	{
		if((b%2)==1)
		{
			result=(result*a)%1000000007;
		}
		a=(a*a)%1000000007;
		b=b/2;
	}
	printf("%llu",result);
	return 0;
}

//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/calculate-the-power/