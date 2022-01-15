#include<iostream>
using namespace std;
int main()
{
    
    long long int sumodd = 0,sumeven = 0,startodd = 1,starteven = 2,i,n;
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        sumodd = sumodd + startodd;
        sumeven = sumeven + starteven;
        //increment
        startodd = startodd + 2;
        starteven = starteven + 2;
    }

    cout<<sumodd<<" "<<sumeven<<"\n";
    
    return 0;
}