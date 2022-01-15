#include<iostream>
using namespace std;
int main()
{
    int n = 18;
    // cin>>n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    cout<<count<<"\n";
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    
    return 0;
}