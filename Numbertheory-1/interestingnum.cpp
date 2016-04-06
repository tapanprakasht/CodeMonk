#include<iostream>
#define ll long long 
using namespace std;
int main()
{
	ll t,l,r,count,i,j,totalcount=0;
	cin>>t;
	while(t--)
	{
		cin>>l>>r;
		totalcount = 0;
		for(i=l;i<=r;i++)
		{
			count=0;
			for(j=1;j*j<=i;j++)
			{
				if(i%j==0)
				{
					if(j*j==i)
						count++;
					else
						count+=2;
				}
			}
			if(count%2==1)
				totalcount++;
		}
		cout<<totalcount<<endl;
	}
}
