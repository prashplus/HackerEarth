#include<iostream>
#include<string>

using namespace std;

int main()
    {
        int i,count=0,t;
        cin>>t;
        string s;
        while(t--){
            count=0;
            cin>>s;
            for(i=0;i<s.length();i++){
                //(int(s[i])==97||int(s[i])==101||int(s[i])==105||int(s[i])==111||int(s[i])==117
                //cout<<s[i];
                if(int(s[i])==97||int(s[i])==101||int(s[i])==105||int(s[i])==111||int(s[i])==117)
                    count++;
        }
        cout<<count<<'\n';
        }
        

        return 0;
    }
    //https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/vowels/