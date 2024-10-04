#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
    string str;
    int zero = 0;
    int one =0;
    bool danger =  false;
    cin>>str;


    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '0')
        {
            zero++;
            one = 0;
        }
        else if(str[i]== '1')  
        {
            one++;
            zero =0;

        }
        if(zero>= 7 || one >=7)
        {
            danger = true;
        }
    }

    if(danger)
    {cout<<"YES";
    }
    else
    {
    cout<<"NO";
    }
    return 0;
}
 