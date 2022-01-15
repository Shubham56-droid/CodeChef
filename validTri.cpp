#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    // we will use Herons formula
    double s = (a+b+c)/2;
    double res = sqrt(s*(s-a)*(s-b)*(s-c));

    if(res > 0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    
    return 0;
}