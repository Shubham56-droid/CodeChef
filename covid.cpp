#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    long long int t;
    cin>>t;
    long long int n,d;
    while(t--)
    {
        cin>>n>>d;
        if(n<d)
        {
            cout<<n<<"\n";
        }
        else
        {
            if(d>=0 && d<=10)
            {
                int res1 = (int)pow(2,d);
                if(res1 >= n)
                {
                    cout<<n<<"\n";
                }
                else
                {
                    cout<<res1<<"\n";
                }
            }
            else if(d>10)
            {
                int res2 = ((int)pow(3,(d-10))) * 1024;

                if(res2 >= n)
                {
                    cout<<n<<"\n";
                }
                else
                {
                    cout<<res2<<"\n";
                }
                
            }
        }
    }
    return 0;
}