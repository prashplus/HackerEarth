#include<stdio.h>

int main()
{
   int n,d,sum=0,sum1=0,sum2=0,a[100000];
   scanf("%d",&n);
   for (int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   for (int j =0; j<n; j++)
   {
      if (j<n/2)
      {
         int m=a[j];
         int c=0;
         while (m>0)
         {
            m=m/10;
            c++;
         }
         d=a[j]/pow(10,c-1);
         if(j%2==0)sum1+=d;
         if(j%2==1)sum2+=d;
      }
      else if (j>=n/2)
      {
         d=a[j]%10;
         if(j%2==0)sum1+=d;
         if(j%2==1)sum2+=d;
      }
}
sum=sum1-sum2;
if ( sum%11==0 )
   printf("OUI");
else
   printf("NON");

return 0;
}


//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisibe-or-2d8e196a/