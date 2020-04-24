// Write your code here
#include<stdio.h>
#include<string.h>
int main(){
	char dice[100000];
	int count=0,flag=0;
	scanf("%s",dice);
	for(int i=0;i<strlen(dice);i++){
		if(dice[i]=='6'){
			flag=1;
            continue;
		}
		else{
			flag=0;
			count++;
			}
	}
	if(flag==1){
		printf("-1");
	}
	else{
		printf("%d",count);
	}
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-dice-d4dc5b11/