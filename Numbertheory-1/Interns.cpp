#include<iostream>
using namespace std;
int main()
{
	long long n,x,i,count=0;
	cin>>n;
	while(n--)
	{
		cin>>x;
		count = 0;
		for(i=1;i*i<=x;i++)
		{
			if(x%i==0)
			{
				if(i*i==x)
					count++;
				else
					count+=2;
			}
			if(count>=4)
				break;
		}
		if(count<4)
			cout<<"NO\n";
		else
			cout<<"YES\n"; 
	}
}
