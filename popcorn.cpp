#include<iostream>
using namespace std;
long long int max(long long int n1,long long int n2)
{
    if(n1>=n2){return n1;} 
    else{return n2;} 
}
int main()
{
    long long int t;
    cin>>t;
    long long int a1,a2,b1,b2,c1,c2;
    while(t--)
    {
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;

        long long int maximun = max((a1+a2),max((b1+b2),(c1+c2)));
        cout<<maximun<<"\n";
    }
    return 0;
}