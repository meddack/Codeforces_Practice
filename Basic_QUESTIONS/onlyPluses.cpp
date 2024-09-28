#include<bits/stdc++.h>
using namespace std;


void sort(int arr[3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
}


int main()
{
    int size;
    cin>>size;
    while(size--)
    {
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<5 ;i++)
    {
        sort(arr);
        arr[0]+=1;
    }

    // for(int i=0; i<3; i++)
    //   cout<<arr[i]<<" ";

    cout<<arr[0]*arr[1]*arr[2]<<endl;
    }


}