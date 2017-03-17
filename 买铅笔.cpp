#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n,t;
	cin>>t;
	int v[4],s[4];
	for(i=1;i<=3;i++)
	{
		cin>>s[i]>>v[i];
	}
	int ans=999999999;
	for(i=1;i<=3;i++)
	{
		int s1=s[i],v1=v[i];
		while(s1<t)
		{
			s1+=s[i];
			v1+=v[i];
		}
		if(v1<ans) ans=v1;
	}
	cout<<ans<<endl;
	return 0;
} 
