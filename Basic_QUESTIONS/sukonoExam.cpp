#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    { cin>>a>>b;

    if(a == 0 && b %2 == 0)
    {
        cout<<"yes"<<endl;

    }

    else if(a %2 == 0 && a>0)
    { 
        cout<<"yes"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }
    }

}  




