#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t;
    int x = 0;

    cin >> t;
    while(t--)
    {
        cin>>str;
        if(str == "++X" || str == "X++")
        {
            x++;

        }
        else if(str == "--X" || str == "X--")
        {
            x--;

        }
        else
        {
            return 0;
        }
    }
    cout<<x<<endl;
    

}