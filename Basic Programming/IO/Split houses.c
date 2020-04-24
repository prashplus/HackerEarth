#include <stdio.h>
int main()
    {
        int n,flag=0;
        char v[20];
        
        scanf("%d",&n);
        scanf("%s",v);
        for(int i = 0 ; i<n; i++)
            {
                if(v[i]=='.')
                    v[i]='B';
                if(i>0&&i<(n-1)&&v[i]=='H')
                    {
                        if(v[i-1]=='H'||v[i+1]=='H')
                            {
                                flag=1;
                                break;
                            }
                    }
                if(i==0&&v[i]==v[i+1])
                    {
                        flag=1;
                        break;
                    }
            }
        if(flag==1)
            printf("NO");
        else
        {
            printf("YES\n");
            printf("%s",v);
            
        }
        return 0;
    }


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/split-house-547be0e9/