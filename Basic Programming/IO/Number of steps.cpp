#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,min=INT_MAX,steps=0,f=0;
    cin>>n;
    vector<int> a(n), b(n);

    for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<min)
		min=a[i];
	}
    for(int i=0;i<n;i++)
    	cin>>b[i];

    for(int i=0;i<n;i++){
        while(a[i]>min && b[i]!=0){
			a[i]-=b[i];
			steps++;
        }
        if(a[i]<min){
            min=a[i];
            i=-1;
        }
        if(a[i]<0){
       		f=-1;
        	break;
        }
    }
    if(f==-1)
    	cout<<-1;
    else
    	cout<<steps;
	return 0;
}
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/description/