#include<bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
	return a>b?b:a;
}
int main()
{
	int f[101][101],s[1001];
	int i,j,x,k,n;
	cin>>n;
	s[0]=0;
	memset(f,127/3,sizeof(f));
	for(i=1;i<=n;i++)   f[i][i]=0;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		s[i]=s[i-1]+x;
	}
	for(i=n;i>=1;i--)
	    for(j=i+1;j<=n;j++)
	         for(k=i;k<=j-1;k++)
	               f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]+s[j]-s[i-1]);
	cout<<f[1][n];
	return 0;
}
