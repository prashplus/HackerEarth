// Write your code here
#include<stdio.h>
int main(){
	int n,sh,sm,eh,em,mm,hh;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&sh, &sm, &eh, &em);
		if(sm > em){
        	--eh;
        	em += 60;
    	}
    	mm = em - sm;
    	hh = eh - sh;
		printf("%d %d\n", hh, mm);
	}
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/