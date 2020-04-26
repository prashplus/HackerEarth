#include<iostream>
#include<string>
using namespace std;

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
	string s;
	cin>>t;
	
	while(t--){
		flag = 0;
		cin>>s;
		n = s.size();
		//cout<<n<<'\n';
		for(i = 0;i<n;i++){
			//cout<<stack[top];
			if(s[i]=='{'||s[i]=='('||s[i]=='['){
				push(s[i]);
				//cout<<s[i];
			}
			else{
				c = pop();
				if(c=='0')
					{
						flag = 1;
						break;
					}
				//cout<<c;
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
		//cout<<top;
		if(flag || top != -1)
			cout<<"NO"<<'\n';
		else
			cout<<"YES"<<'\n';
		top = -1;
		
	}
	return 0;
}
//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/balanced-brackets-3-4fc590c6/
