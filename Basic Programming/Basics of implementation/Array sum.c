// Write your code here
#include<stdio.h>
int main(){
	int n;
	long long int a[10000],s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		s=s+a[i];
	}
	printf("%lld",s);
	return 0;
}

//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-sum-2-725368ac/