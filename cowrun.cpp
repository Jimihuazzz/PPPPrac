#include<bits/stdc++.h>
using namespace std;

int opt[10001][501];
int a[10001];
int n,m;
int main()
{
	int i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;++i)
	{
		opt[i][0]=opt[i-1][0];
		for(j=1;j<=m;++j)
			{
				if(i>=j) opt[i][0]=max(opt[i][0],opt[i-j][j]);
				opt[i][j]=max(opt[i][j],opt[i-1][j-1]+a[i]);
			}
	}
	cout<<opt[n][0]<<endl;
	return 0;
}
