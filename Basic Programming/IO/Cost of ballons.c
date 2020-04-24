// Write your code here
#include<stdio.h>
int main(){
	int t,cg,cp,n,a,b,c1=0,c2=0;
	scanf("%d",&t);
	for(int k=0;k<t;k++){
		scanf("%d %d ",&cg,&cp);
		scanf("%d",&n);
		c1=0,c2=0;
		for(int i=0;i<n;i++){
				scanf("%d",&a);
				scanf("%d",&b);
				c1=c1+a;
				c2=c2+b;
		}
		if(cg<cp){
			if(c1>c2)
            {
                c1=c1*cg;
                c2=c2*cp;
            }
            else
            {
                c1=c1*cp;
                c2=c2*cg;
            }
		}
		else
        {
            if(c1<c2)
            {
                c1=c1*cg;
                c2=c2*cp;
            }
            else
            {
                c1=c1*cp;
                c2=c2*cg;
            }
        }
        c1+=c2;
        printf("%d\n",c1);
	}
	
	return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/