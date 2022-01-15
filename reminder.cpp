#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        int res = a % b;
        cout<<res<<"\n";
    }
    return 0;
}