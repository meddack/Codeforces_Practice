#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;


    for(int i=0;i<str1.length();i++)
    {
        if(isupper(str1[i]))
        {
            str1[i]= str1[i]-'A' +'a';

        }
    }

      for(int i=0;i<str2.length();i++)
    {
        if(isupper(str2[i]))
        {
            str2[i]= str2[i]-'A' +'a';

        }
    }

    if(str1==str2)
    {
        cout<<"0";
    }
    else if(str1<str2)
    {
        cout<<"-1";

    }
    else
    {
        cout<<"1";

    }
}