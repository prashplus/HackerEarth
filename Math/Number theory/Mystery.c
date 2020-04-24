// Write your code here
#include<stdio.h>
#include <math.h>
int main()
{
int t,n,c;
scanf("%d",&t);
while(t--){
	scanf("%d",&n);
	c=0;

	for(int i=1;i<=sqrt(n);i++)
		if(n%i==0)
			c++;

		if(n==0||n==1)
			printf("%d\n",n);
		else{
			int s=sqrt(n);
			if(s*s==n)
				printf("%d\n",2*c-1);
			else
				printf("%d\n",2*c);
		}
}
return 0;
}


//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/mystery-20/