// Write your code here
#include <stdio.h>
#include <string.h>
int main(){
	long int n,count=0;
	int h=0,a=0,c=0,k=0,e=0,r=0,t=0;
	char str[1000000];
	scanf("%ld", &n);              			
	scanf("%s",str);
	if(n<11){
		printf("%ld",count);
		return 0;
	}
	char r1;
	for(int i=1;i<=n;i++){
		r1=str[i];
		switch(r1){
			case 'h': h++;
			break;
			case 'a': a++;
			break;
			case 'c': c++;
			break;
			case 'k': k++;
			break;
			case 'e': e++;
			break;
			case 'r': r++;
			break;
			case 't': t++;
			break;
			default:
			break;
		}
	}
	while(h>=2 && a>=2 && c>=1 && k>=1 && e>=2 && r>=2 && t>=1){
		h-=2;
		a-=2;
		c-=1;
		k-=1;
		e-=2;
		r-=2;
		t-=1;
		count++;
	}
	printf("%ld",count);
	return 0;
}

//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/print-hackerearth/