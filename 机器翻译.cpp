#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	int ans=0,len=0;
	int a[101];
	cin>>m>>n;
	
	for(int i=1;i<=100;i++)
		a[i]=-1;
	for(int i=1;i<=n;i++)
	{
		int p;
		bool f=true;
		cin>>p;
		for(int j=1;j<=m;j++) 
			if(a[j]==p) f=false;
		if(f)
		if(len<m) 
		{
			a[++len]=p;
			ans++;
		}
		else 
		{
			for(int k=1;k<=m-1;k++)
				a[k]=a[k+1];
			a[len]=p;
			ans++;
		}
	} 
	cout<<ans<<endl;
	return 0;
} 
