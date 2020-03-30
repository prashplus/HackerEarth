#include<iostream>
#include<string>

using namespace std;
int main()
    {
        int t,i,a1,a2,flag,len;
        cin>>t;
        string s;
        while(t--){
            s.clear();
            cin>>s;
            len = s.length();
            if(len==1){
                cout<<"YES\n";
                continue;
            }

            flag = 0;
            for(i=0;i<len-1;i++){
                a1=int(s[i])-97;
                a2=int(s[i+1])-97;
                //cout<<a1<<" : "<<a2<<endl;
                if((a1-a2)!=1&&(a2-a1)!=1&&(a1-a2)!=25&&(a2-a1)!=25)
                    flag = 1;
            }
            if(flag){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }

        return 0;
    }
    //https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/sumits-string/