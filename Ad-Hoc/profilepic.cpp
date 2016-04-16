#include<iostream>
using namespace std;
int main()
{
	int l,n,w,h;
	cin>>l>>n;
	while(n--)
	{
		cin>>w>>h;
		if(w<l || h<l)
			cout<<"UPLOAD ANOTHER"<<endl;
		else if(w>=l && h>=l && (w!=h))
			cout<<"CROP IT"<<endl;
		else
			cout<<"ACCEPTED"<<endl;
	}
	return 0;
}
