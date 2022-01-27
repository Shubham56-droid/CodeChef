#include<bits/stdc++.h>
using namespace std;

bool checkEven(int n)
{
    if(n%2==0){return true;}
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
    cin>>str;
    int len = str.length();
    if(checkEven(len))
    {
        int i,j;
        for (i = 0,j=(len-1); i<(len/2),j>=(len/2); i++)
        {
            if(str[i] == str[j])
            {
                cout<<"It is a lapindrome\n";
                break;
            }
            else
            {
                cout<<"It is not a lapindrome\n";
                break;
            }
        }
        
    }
    else
    {
        int i,j;
        for (i=0,j=(len-1);i<(len/2),j>(len/2); i++)
        {
            if(str[i] == str[j])
            {
                cout<<"It is a lapindrome\n";
                break;
            }
            else
            {
                cout<<"It is not a lapindrome\n";
                break;
            }
        }
        

    } 
    }
    
    
    return 0;
}
