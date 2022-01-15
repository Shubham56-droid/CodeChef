#include<iostream>
using namespace std;
int iseven(int num)
{
    if(num % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(iseven(i)==0)
        {
            count = count + 5;
            for(int j=(count-4); j<=count; j++)
            {
                cout<<j<<" ";
            }
            cout<<"\n";
        }

        if(iseven(i)==1)
        {
            count = count + 5;
            for (int j = count; j >= (count-4); j--)
            {
                cout<<j<<" ";    
            }
            cout<<"\n";
        }
    }
    
    
    return 0;
}