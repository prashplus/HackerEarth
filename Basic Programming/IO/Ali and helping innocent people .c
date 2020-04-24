// Write your code here
#include<stdio.h>
int main(){
	int flag=0,l,m,n,o;
    char a[9];
    scanf("%s",a);
    if(a[2]=='A' || a[2]=='E' || a[2]=='I' || a[2]=='O' || a[2]=='U' || 
		a[2]=='Y')
        flag=1;
        
    l=a[0]+a[1];
    m=a[3]+a[4];
    n=a[4]+a[5];
    o=a[7]+a[8];
        
    if(l%2!=0 || m%2!=0 || n%2!=0 || o%2!=0)
        flag=1;
            
    if(flag==0)
        printf("valid");
    else
        printf("invalid");
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/