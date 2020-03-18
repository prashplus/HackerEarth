#include<stdio.h>
int main(){
	int n,i,s=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s*i;
	}
	printf("%d",s);
	return 0;
} 

//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/