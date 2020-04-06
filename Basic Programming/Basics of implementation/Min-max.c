// Write your code here
#include <stdio.h>
int main(){
	int a[1000],min,max,n;
	scanf("%d", &n);              			
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	min=max=a[1];
    for(int i=1; i<=n; i++)
    {
        if(min>a[i]){
			min=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(min==a[j]){
				min++;
				break;
			}
		}
	}
	 
	if(min-1==max){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/min-max-3/