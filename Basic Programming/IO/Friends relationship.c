#include <stdio.h>
int main()
    {
        int n,a,i,j;
        scanf("%d",&n);
        while(n--)
            {
                scanf("%d",&a);
                for(i=1;i<=a;i++)
                    {
                        for(j=1;j<=i;j++)
                            {
                                printf("*");
                            }
                        for(j=a-i;j>0;j--)
                            {
                                printf("#");
                            }
                        for(j=a-i;j>0;j--)
                            {
                                printf("#");
                            }
                        for(j=1;j<=i;j++)
                            {
                                printf("*");
                            }
                        printf("\n");
                    }
                
            }
    }


    //https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/