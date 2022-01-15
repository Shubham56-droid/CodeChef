#include<iostream>
using namespace std;
int main()
{
    int t,k;
    cin>>t>>k;
    
    int arr[t];
    for (int i = 1; i<= t; i++)
    {
        cin>>arr[i];
    }

    int count = 0;
    for (int i = 1; i <= t; i++)
    {
        if(arr[i] % k == 0)
        {
            count = count  + 1;
        }
    }


    cout<<count;
    
    
    return 0;
}