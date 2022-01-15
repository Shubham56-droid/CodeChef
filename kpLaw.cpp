#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    float a,b,c,d;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        float res1 = (a*a) / (c*c*c);
        float res2 = (b*b) / (d*d*d);
        if(res1 == res2)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

    return 0;
}