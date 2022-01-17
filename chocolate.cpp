#include<bits/stdc++.h>
using namespace std;

int countRec(int choc,int wrap)
{
    if(choc < wrap)
    {
        return 0;
    }
    int newChoc = choc / wrap;

    return newChoc + countRec( newChoc+ choc%wrap , wrap);
}
int countMaxChoco(int money,int price,int wrap)
{
    int choc = money/price;
    return choc + countRec(choc,wrap);
}

int main()
{
    int money = 15;
    //cost of one chocalate
    int price = 1;
    //number of wrappers of new choc
    int wrap = 3;

    cout<<countMaxChoco(money,price,wrap);
}