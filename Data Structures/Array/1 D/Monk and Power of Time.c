//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-power-of-time/?utm_source=header
#include<stdio.h>

int n,a[100],b[100],p=0;

void change()
    {
        int i,temp;
        temp=a[p];
        for(i=p;i<n-1;i++)
            {
                a[i]=a[i+1];
            }
        a[n-1]=temp;
    }

void pop()  
    {
        p++;
    }

int main()
    {
        int i,count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        
        while(p<n)
            {
                if(a[p]!=b[p])
                    {
                        change();
                        count++;
                    }
                else
                    {
                        pop();
                        count++;
                    }
            }
        printf("%d",count);
        return 0;
    }