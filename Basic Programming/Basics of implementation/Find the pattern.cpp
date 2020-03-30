#include<iostream>
#include<climits>
using namespace std;

int main()
    {
        int n,i;
        long long min=LLONG_MAX,max=LLONG_MIN;
        cin>>n;
        long long *a = (long long *)malloc(sizeof(long long)*n);
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<min)
                min = a[i];
            if(a[i]>max)
                max = a[i];
        }
        cout<<min+max;
        return 0;
    }
    //https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/find-the-pattern-6/