#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int a[1001];
	memset(a,0,sizeof(a));
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=n;i++)
		a[i]=(a[i-1]*2+a[i-2])%32767;
	cout<<a[n];
	
	}
	return 0;
}
