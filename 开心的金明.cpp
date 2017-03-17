#include<bits/stdc++.h>
using namespace std;

long long f[1000001],v[1001],p[1001];
int main()
{
	int i,n,m;
	memset(f,0,sizeof(f));
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++)
		{
			scanf("%d%d",&v[i],&p[i]);
			p[i]=p[i]*v[i];
		}
//	for(i=1;i<=n;i++)
//		cout<<"i="<<p[i]<<"   ";
//	cout<<endl;
	for(int i=1;i<=n;i++)
		for(int j=m;j>=v[i];j--)
			f[j]=max(f[j],f[j-v[i]]+p[i]);
	printf("%lld",f[m]);
	return 0;
 } 
