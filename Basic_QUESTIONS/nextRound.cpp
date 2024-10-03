#include<iostream>
using namespace std;
int main()
{
    int n,k;
    
    cin >>n>>k;
    int arr[n];
        for(int i=0 ; i<n;i++)
        {
            cin>>arr[i];

        }
        // cout<<"1 done "<<endl;
   
        // for(int m=0 ; m<n;m++)
        // {
        //     cout<<arr[m]<<" " ;

        // }

        


        while(n)
        {
            if(arr[k-1] == 0)
            { 
                k--;

            }
            else if(arr[k-1]== arr[k])
            {
                k++;
            }
            

            else
            {
                break;
            }


        }
        cout<<k<<endl;

   
}