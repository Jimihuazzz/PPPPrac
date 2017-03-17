#include<bits/stdc++.h>
using namespace std;

int a[100001],f[100001],c[100001];
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		f[i]=1;
	for(i=1;i<=n;i++)
		c[i]=1;
	for(i=2;i<=n;i++)
	{
		int l=0;
		for(j=i-1;j>=1;j--)
			if(a[j]<a[i]&&f[j]>l)
			l=f[j];
		f[i]=l+1;
	}
		for(i=n-1;i>=1;i--)
	{
		int l=0;
		for(j=i+1;j<=n;j++)
			if(a[j]<a[i]&&c[j]>l)
			l=c[j];
		c[i]=l+1;
	}
	int maxx=0;
	for(i=1;i<=n;i++)
		maxx=max(maxx,f[i]+c[i]);
	maxx--;
	cout<<n-maxx<<endl;
	return 0;
}
