#include<iostream>
using namespace std;
int main()
{
	int n,count,i,j;
	long *s;
	cin>>n;
	s = new long [n];
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		count =0;
		for(j=0;j<n;j++)
		{
			if(s[i]%s[j]!=0 && j!=i)
				count++;
		}
		if(count==n-1)
			cout<<s[i]<<" ";
	}
	cout<<endl;
}
