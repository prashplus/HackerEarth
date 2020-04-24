#include<stdio.h>
int main(){
	long int n,x,y;
	scanf("%ld",&n);
	scanf("%ld",&x);
	for(int i=0;i<n;i++){
		scanf("%ld",&y);
		if(y>=x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/