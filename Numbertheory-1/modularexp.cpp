#include<iostream>
using namespace std;
int main()
{
	long long a,b,c,ans = 1;
	cin>>a>>b>>c;
	while(b!=0)
	{
		if(b%2==1)
		{
			ans *= a;
			ans %= c;
		}
		a = a* a;
		a %=c;
		b/=2;
	}
	cout<<ans<<endl;
}
