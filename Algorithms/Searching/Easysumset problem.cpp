#include <iostream>
using namespace std;
int main()
{
int a,b;
cin >> a;
int s[a];
for(int i=0;i<a;i++)
cin >> s[i];
cin >> b;
int t[b];
for(int i=0;i<b;i++)
cin >> t[i];
int y=max(s[a-1],t[b-1]);
for(int i=0;i<y;i++)
{
int w=0;
for(int j=0;j<a;j++)
{
for(int k=0;k<b;k++)
{
if(i+s[j]==t[k] )
{
w++;
break;
}
}
}
if(w==a)
cout << i << " ";
}
}


//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/easy-sum-set-problem-7e6841ca/