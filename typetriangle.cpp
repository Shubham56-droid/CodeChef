#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b > c && b+c > a && c+a > b)
    {
            if(a==b && b==c && c==a)
        {
            cout<<"1\n";
        }
        else if( (a==b && b!=c && a!=c) || (b==c && b!=a && c!=a) || (c==a && c!=b && a!=b))
        {
            cout<<"2\n";
        }
        else if( a!=b && b!=c && c!=a)
        {
            cout<<"3\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }else
    {
        cout<<"-1\n";
    }
    
    return 0;
}