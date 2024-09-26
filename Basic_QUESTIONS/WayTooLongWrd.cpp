#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;

        int k=a.length();
        
        if(k<=10)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a[0]<<k-2<<a[k-1]<<endl;
        }

    }
    }

