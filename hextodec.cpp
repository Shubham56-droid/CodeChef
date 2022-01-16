#include<bits/stdc++.h>
using namespace std;
int  bintodec(string hex)
{
    int ans = 0;
    int x = 1;
    int s = hex.size();
    for (int i = s-1; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <='9')
        {
            ans =  ans + x*(hex[i]-'0');
        }
        else if( hex[i] >= 'A' && hex[i] <= 'F')
        {
            ans = ans + x*(hex[i] - 'A' + 10);
        }
        x *= 16;
    }
    
    return ans;
}
int main()
{
    string hex;
    cin>>hex;
    int dec = bintodec(hex);
    cout<<dec<<endl;
    return 0;
}