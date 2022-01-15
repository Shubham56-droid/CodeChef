#include<iostream>
using namespace std;
int numSum(int num)
{
    int sum = 0;
    while(num>0)
    {
        int lastdigit = num % 10;
        sum = sum + lastdigit;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    int num;
    while(t--)
    {
        cin>>num;
        int ans = numSum(num);
        cout<<ans<<"\n";
    }

    return 0;
}