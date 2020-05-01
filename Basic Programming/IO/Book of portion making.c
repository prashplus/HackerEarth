// Write your code here
#include<stdio.h>
int main(){
	char n[10];
	int l;
	scanf("%s",&n);
	l=strlen(n);
	if(l!=10){
		printf("Illegal ISBN");
		exit(0);
	}
	l=0;
	for(int i=1;i<=10;i++){
		l=l+(i*(n[i-1]-48));
	}
	if(l%11==0){
		printf("Legal ISBN");
	}
	else{
		printf("Illegal ISBN");
	}
	
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/