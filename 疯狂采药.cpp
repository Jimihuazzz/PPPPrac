#include<bits/stdc++.h>
using namespace std;

long long  f[100001],w[100001],c[100001];
int main()
{
	int t,m;
	cin>>t>>m;
	int i,v,j;
	for(i=1;i<=m;i++)
		cin>>w[i]>>c[i];
	for(i=1;i<=m;i++)
		for(v=w[i];v<=t;v++)
			f[v]=max(f[v],f[v-w[i]]+c[i]);
	cout<<f[t]<<endl;	
	return 0;
}
