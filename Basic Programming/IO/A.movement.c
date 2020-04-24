// Write your code here
#include<stdio.h>
int main(){
	long int n,r,steps;
	scanf("%ld",&n);
	r=n%5;
	steps=n/5;
	if(r==0){
		printf("%ld",steps);
	}
	else{
		printf("%ld",steps+1);
	}
	
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/a-movement-1/