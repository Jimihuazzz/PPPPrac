#include<bits/stdc++.h>
using namespace std;

int f[1001],w[1001],c[1001];
int main()
{
	int i,v,t,m;
	cin>>t>>m;
	for(i=1;i<=m;i++)
		cin>>w[i]>>c[i];
	for(i=1;i<=m;i++)
		for(v=t;v>=w[i];v--)
			f[v]=max(f[v],f[v-w[i]]+c[i]);
	cout<<f[t]<<endl;	
	return 0;	
} 
