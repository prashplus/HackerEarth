// Write your code here
#include <stdio.h>
#include <string.h>

int main(){
	char a[10001];
	scanf("%s",a);
	int sum=0;
	for(int i=0;i<strlen(a);i++){
		sum+=a[i]-96;
	}
	printf("%d ",sum);
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/