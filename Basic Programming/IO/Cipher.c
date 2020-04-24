#include<stdio.h>
int main(){
	int k,val;
	char str[1000];
	scanf("%s",str);
	scanf("%d",&k);
	for(int i=0;i<strlen(str);i++){
		if(isalnum(str[i]))
        {
			val=k;

			if(str[i]>=97 && str[i]<=122){
          		while(val--)
                {
                    if(str[i]=='z')
                        str[i]='a';
                    else
                        str[i]++;
                }
			}
			else if(str[i]>=65 && str[i]<=90){
		  		while(val--)
                {
                    if(str[i]=='Z')
                        str[i]='A';
                    else
                        str[i]++;
                }
			}
        	else if(str[i]>=48 && str[i]<=57){
         		while(val--)
                {
                    if(str[i]=='9')
                        str[i]='0';
                    else
                        str[i]++;
                }
			}
        	else{
         		str[i]=str[i];
			}
		}
	}
	printf("%s",str);
	return 0;
}



//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/