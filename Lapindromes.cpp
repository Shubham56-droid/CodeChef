#include<iostream>
#include<string.h>
using namespace std;

bool isEven(int num)
{
    if(num % 2 == 0)
    {
        return true;
    }
    return false;
}

bool evencheck1(string s)
{
    int len = s.length();
    int i,j;
    for (i=0, j=(len/2); i<(len/2), j<len; i++,j++)
    {
        if(s[i] == s[j])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool evencheck2(string s)
{
    int len = s.length();
    int i,j;
    for (i=0, j=(len - 1); i<(len/2), j>=(len/2); i++,j--)
    {
        if(s[i] == s[j])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool checkLapindromes(string s)
{
    int i,j;
    int len = s.length();

    if(isEven(len) == true)
    {
        if( evencheck1(s) == true || evencheck2(s) == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        for (i=0,j=len-1; i<(len/2),j>(len/2); i++,j--)
        {
            if(s[i] == s[j])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(checkLapindromes(s) == true)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    

    return 0;
}