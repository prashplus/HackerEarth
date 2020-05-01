// Write your code here
#include<stdio.h>
#include<string.h>

char stack[10000];
int top = -1;

void push(int t){
	top++;
	stack[top]=t;
}
char pop(){
	if(top == -1)
		return '0';
	char c = stack[top];
	top--;
	return c;
}

int main()
{
	int t,i,n,flag;
	char c,p;
	char s[1000];
	scanf("%d",&t);
	
	while(t--){
		flag = 0;
		scanf("%s",&s);
		n = strlen(s);
		
		for(i = 0;i<n;i++){
			
			if(s[i]=='{'||s[i]=='('||s[i]=='['){
				push(s[i]);
				
			}
			else{
				c = pop();
				if(c=='0')
					{
						flag = 1;
						break;
					}
				
				if(s[i]=='}')
					{
						if(c!='{')
							{
								flag = 1;
								break;
							}
					}
				else if(s[i]==')'){
					if(c!='(')
					{
						flag = 1;
						break;
					}
				}
				else{
					if(c!='[')
					{
						flag = 1;
						break;
					}
				}
			}
		}
	
		if(flag || top != -1)
			printf("NO\n");
		else
			printf("YES\n");
		top = -1;
		
	}
	return 0;
}


//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/balanced-brackets-3-4fc590c6/