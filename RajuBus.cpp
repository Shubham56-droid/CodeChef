#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n % 5 == 0 || n % 6 ==0 || (n % 5 == 0 && n % 6 ==0) )
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}