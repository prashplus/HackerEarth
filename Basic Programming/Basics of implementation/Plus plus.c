#include<stdio.h>

int main()
    {
        int m,n,i,j,k,x,y;
        long sum,maxsum=0;
        scanf("%d %d", &m, &n);
        int a[m][n];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d", &a[i][j]);
        int data[m][n][5];
        
        for(i=1;i<m-1;i++)
            {
                for(j=1;j<n-1;j++)
                    {
                        data[i][j][0]=a[i][j];
                        data[i][j][1]=a[i-1][j];
                        data[i][j][2]=a[i][j+1];
                        data[i][j][3]=a[i+1][j];
                        data[i][j][4]=a[i][j-1];
                    }
            }
        for(i=1;i<m-1;i++)
            {
                for(j=1;j<n-1;j++)
                    {
                        for(x=1;x<m-1;x++)
                            {
                                for(y=1;y<n-1;y++)
                                    {
                                        sum=0;
                                        for(k=0;k<5;k++)
                                            {
                                                if(!((x>i-2&&x<i+2)&&(y>j-2&&y<j+2)))
                                                    sum += data[i][j][k]*data[x][y][k];
                                            }
                                        if(sum > maxsum)
                                            maxsum=sum;
                                    }
                            }
                    }
            }
        printf("%d", maxsum);
        
        return 0;
    }

    //https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/plus-plus-60bcac48/