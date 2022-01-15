#include<iostream>
using namespace std;
int main()
{
    int n,f;
    cin>>n>>f;
    int arr[n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == f)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"1\n";
    }
    else
    {
        cout<<"-1\n";
    }
    
    return 0;
}