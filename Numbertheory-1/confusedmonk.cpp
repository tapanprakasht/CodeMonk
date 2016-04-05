#include<iostream>
#include<cmath>
#define ll long long
const ll monkq = 1e9 + 7;
using namespace std;
ll gcd(ll a,ll b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
ll modexp(ll a,ll b)
{
	ll ans = 1;
	while(b!=0)	
	{
		if(b%2==1)
		{
			ans = (ans*a)%monkq;
		}
		a = (a*a)%monkq;
		b/=2;
	}
	return ans;
}
int main()
{
	int n,a[51],i;
	ll f =1,g;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		f = (f * a[i])%monkq;
	}
	g = a[0];
	for(i=1;i<n;i++)
	{
		g = gcd(g,a[i]);
	}
	cout<<modexp(f,g)<<endl;
}
