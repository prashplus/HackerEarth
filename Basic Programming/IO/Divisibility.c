// write your code here
#include<stdio.h>
int main(){
	int n,a[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int l=a[n-1];
	if(l%10==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/