// Write your code here
#include<stdio.h>
int main(){
	int l,n;
	scanf("%d %d",&l, &n);
	if(l<=23 && 500<n<1000){
		printf("Take Medicine");
	}
	else{
		printf("Don't take Medicine");
	}
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/doctors-secret/