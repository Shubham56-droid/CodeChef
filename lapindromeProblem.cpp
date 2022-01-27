#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string str;
    cin>>str;
    int len = str.length();
    int left[26] = {0};
    int right[26] = {0};
    
    // incrementing the  value at index of that position
    for(int i=0; i<(len/2); i++)
    {
        int index = str[i] - 'a';
        left[index]++;
    }
    
    for(int i=((len+1)/2); i<len; i++)
    {
       int index = str[i] - 'a';
       right[index]++;
    }
    int flag = 0;
    for(int i=0; i<26; i++)
    {
      if(left[i] != right[i])
      {
        flag = 1;
      }
    }
    
    if(flag == 0)
    {
      cout<<"YES"<<"\n";
    }
    else
    {
      cout<<"NO"<<"\n";
    }
  }
  return 0;
}
