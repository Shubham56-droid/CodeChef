#include<iostream>
using namespace std;

int reverseNum(int n)
{
    int sum = 0;
    int rev = 0;
    while(n > 0)
    {
        int lastdigit = n % 10;
        rev = (rev * 10) + lastdigit;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int reverse = reverseNum(n);
        cout<<reverse<<"\n";
    }

    return 0;
}