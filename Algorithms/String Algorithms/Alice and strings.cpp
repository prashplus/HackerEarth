#include<iostream>
#include<string>
#include<cstdlib>
#include<climits>

using namespace std;

int main()
    {
        string a,b;
        cin>>a>>b;
        int l1,l2,i,j;
        l1 = a.length();
        l2 = b.length();
        if(l1 != l2)
            {
                cout<<"NO";
                return 0;
            }
        int mingap;
        for(i=l1;i>=0;i--){
            mingap = b[i]-a[i];
            if(mingap<0)
                {
                    cout<<"NO";
                    return 0;
                }
            a[i]=char(int(a[i]+mingap));
        } 
        //cout<<a<<" "<<b;
        if(a.compare(b)==0)
            cout<<"YES";
        else
            cout<<"NO";
        return 0;       
    }
    //https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/aliceandstrings-9da62aa7/