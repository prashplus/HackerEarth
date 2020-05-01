//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/golf/distinct-count-2/
#include<stdio.h>

long int a[10000];

void bubbleSort(int n) 
{ 
   int i, j, temp; 
   for (i = 0; i < n-1; i++)       
       for (j = 0; j < n-i-1; j++)  
           if (a[j] > a[j+1]) 
              {
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
              } 
}

int main()
    {
        long int n,i,temp,final,ans;
        scanf("%ld",&n);
        
        for(i=0;i<n;i++)
            {
                scanf("%ld",&a[i]);
            }
        bubbleSort(n);
        final=temp=ans=1;
        for(i=1;i<n;i++)
            {
                if(a[i-1]==a[i])
                    {
                        temp++;
                    }
                else
                    {
                        if(final<temp)
                            {
                                final=temp;
                                ans=a[i-1];
                            }
                        temp=1;
                    }
            }
        if(final<temp)
            {
                final=temp;
                ans=a[i-1];
            }
        printf("%ld",ans);
        return 0;
    }