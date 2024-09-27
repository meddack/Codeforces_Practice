#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string ans= "";
    cin>>s;

    int ones=0 , twos=0 , threes=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]== '1')
        ones+=1;
        else if(s[i]== '2')
        twos+=1;
        else if(s[i]=='3')
        threes+=1;
    }

    for(int i=0;i<ones;i++)ans+="1+";
    for(int i=0;i<twos;i++)ans+="2+";
    for(int i=0;i<threes;i++)ans+="3+";
    ans.pop_back();
    cout<<ans;
    
    }
