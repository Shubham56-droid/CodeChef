#include<iostream>
using namespace std;
int main()
{
    int w;
    float ac_bal;
    cin>>w;
    cin>>ac_bal;

    if(w%5==0 && w<=(ac_bal-0.5))
    {
        cout<<((ac_bal-w)-0.5);
    }
    else
    {
        cout<<ac_bal;
    }

    return 0;
}