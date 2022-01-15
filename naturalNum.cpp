#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count = count + i;
    }

    cout<<count<<"\n";
    
    return 0;
}