// Write your code here
#include<stdio.h>
int main(){
	char a[1000];
	int x=0,y=0;
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='L'){
			x=x-1;
		}
		if(a[i]=='R'){
			x=x+1;
		}
		if(a[i]=='U'){
			y=y+1;
		}
		if(a[i]=='D'){
			y=y-1;
		}
	}
	printf("%d %d",x,y);
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/