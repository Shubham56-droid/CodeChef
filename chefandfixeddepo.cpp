#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,x;
    while(t--)
    {
        bool flag = false;
        cin>>n>>x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        int sum = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if(sum>=x)
            {
                flag = true;
                break;
            }
        }
        
        if(flag)
        {
            cout<<i+1<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
        
    }
    
    return 0;
}