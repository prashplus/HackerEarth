#include<stdio.h>
#include<stdlib.h>
int max(int num1, int num2);
int main(){
    int n,m;
    long int a[1000000],b[100],c[100];
    scanf("%d",&n);
    for(int p=0;p<n;p++){
        scanf("%ld",&a[p]);
    }
    scanf("%d",&m);
    for(int q=0;q<m;q++){
        scanf("%ld",&c[q]);
    }
    int y=max(a[n-1],c[m-1]);
    for(int i=0;i<y;i++){
        int w=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                if(i+a[j]==c[k]){
                    w++;
                    break;
                }
            }
        }
        if(w==n){
            printf("%ld ", i);
        }
        
    }
    return 0;
}

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}



//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/easy-sum-set-problem-7e6841ca/