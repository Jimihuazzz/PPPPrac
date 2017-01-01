#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int sum[21][21][21][21],a[101][101];
	int i,j,m,n,k,x,y,z,h;
	cin>>n>>x>>y>>z;
	memset(a,0,sizeof(a));
	while(x&&y&&z)
	{
		a[x][y]=z;
		cin>>x>>y>>z;
	}
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++)
	        for(h=1;h<=n;h++)
	             for(k=1;k<=n;k++)
	                  {
	                  int tmp1=max(sum[i-1][j][h-1][k],sum[i][j-1][h][k-1]);
					  int tmp2=max(sum[i-1][j][h][k-1],sum[i][j-1][h-1][k]);
					  sum[i][j][h][k]=max(tmp1,tmp2)+a[i][j];
					  if(i!=h&&j!=k) sum[i][j][h][k]+=a[h][k];	
	                  	
					  }
	cout<<sum[n][n][n][n];
    return 0;
					  
}
