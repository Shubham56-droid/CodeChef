#include<bits/stdc++.h>
int max(int n1,int n2)
{
    if(n1>n2)
    {
        return n1;
    }
    return n2;
}
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,i,j;
    int arr[10][10];
    while(t--)
    {
        cin>>n;
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                cin>>arr[i][j];
            }
        }

        int sum1 = arr[1][0] + arr[2][0] + arr[2][1];
        int sum2 = arr[0][1] + arr[0][2] + arr[1][2];

        if(arr[0][0] == n && arr[2][2]== n && arr[1][1])
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<max(sum1,sum2)<<endl;
        }
        
    }
    return 0;
}
