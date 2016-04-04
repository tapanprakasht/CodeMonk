#include<iostream>
using namespace std;
int main()
{
	long long a,b,i,ans=1,res=0,prev=1;
	string str;
	cin>>a>>b;
	cin>>str;
	for(i=0;i<str.length();i++)
	{
		if(i==0)		
			ans = a;
		else
			ans = (prev*prev)%b;
	        prev = ans;	
		if(str[i]=='1')
			res+=ans;
	}
		
	cout<<res%b<<endl;
}
