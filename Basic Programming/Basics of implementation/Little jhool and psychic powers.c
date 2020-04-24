#include<stdio.h>
int main(){
	char a[1000000];
	int flag=0,c=0,count=0;
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='0')
        {
            if(c==0)
                count++;
            else
                {c=0;count=1;}
        }
     	else
        {
            if(c==1)
                count++;
            else
                {c=1;count=1;}
                            
        }
        if(count>=6)
        {
            flag=1;
            break;
        }
	}
	if(flag==1){
		printf("Sorry, sorry!");
	}
	else{
		printf("Good luck!");
	}
	return 0;
}



//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/psychic-powers/