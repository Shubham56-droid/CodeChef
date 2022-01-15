#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int dsaS,tocS,dmS;
    int dsaD,tocD,dmD;
    int resD,resS;
    while(t--)
    {
        cin>>dsaD>>tocD>>dmD;
        cin>>dsaS>>tocS>>dmS;
        resD = dsaD+tocD+dmD;
        resS = dsaS+tocS+dmS;
        if(resS>resD)
        {
            cout<<"SLOTH"<<"\n";
        }
        else if(resD > resS)
        {
            cout<<"DRAGON"<<"\n";
        }
        else if(resD == resS)
        {
            if(dsaD > dsaS)
            {
                cout<<"DRAGON"<<"\n";
            }
            else if( dsaS > dsaD)
            {
                cout<<"SLOTH"<<"\n";
            }
            else
            {
                if(tocS > tocD)
                {
                    cout<<"SLOTH"<<"\n";
                }
                else if(tocD > tocS)
                {
                    cout<<"DRAGON"<<"\n";
                }
                else
                {
                    cout<<"TIE"<<"\n";
                }
            }
        }
    }
    return 0;
}