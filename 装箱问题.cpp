#include<bits/stdc++.h>
using namespace std;

int f[100001],w[100001];
int main()
{
	int	m,n;
	cin>>m>>n;
	int i,j,v;
	for(i=1;i<=n;i++)
		cin>>w[i];
//	memset(f,127/3,sizeof(f));
	for(i=1;i<=n;i++)
		for(v=m;v>=w[i];v--)
			f[v]=max(f[v],f[v-w[i]]+w[i]);
	cout<<m-f[m]<<endl;
	return 0;
}
