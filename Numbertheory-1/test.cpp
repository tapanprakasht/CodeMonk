#include<iostream>
using namespace std;
int main()
{
	long long a,b,c,i,ans=1;
	cin>>a>>b>>c;
	for(i=1;i<=b;i++)
	{
		ans *= a;
		ans %= c;
	}
	cout<<ans%c<<endl;
}
