#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,i,s=1;
	cin>>t;
	while(t--){
	   long long int a,b,s=1;
	   cin>>a>>b;
	   for(int i=1;i<=b&&s<a;i++){
if(i<11) s*=2;
else s*=3;
}
if(s>=a) s=a;
cout<<s<<endl;

 	}
	return 0;
}