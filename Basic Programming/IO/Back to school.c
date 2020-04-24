// Write your code here
#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a, &b, &c);
	if(a>=b && a>=c){
		printf("%d",a);
	}
	else if(b>=a && b>=c){
		printf("%d",b);
	}
	else{
		printf("%d",c);
	}
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/back-to-school-1/