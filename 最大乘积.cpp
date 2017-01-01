#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
 } 
int main()
{
	int f[101][101],a[101][101];
	int k1,k,i,j,n,s;
	cin>>n>>k1;
	cin>>s;
	for(i=n;i>=1;i--)
	{
		a[i][i]=s%10;
		s/=10;
	}
	for(i=2;i<=n;i++)
	    for(j=i-1;j>=1;j--)
	       a[j][i]=a[j][i-1]*10+a[i][i];
	for(i=1;i<=n;i++)   f[i][0]=a[1][i];
	for(k=1;k<=k1;k++)
	     for(i=k+1;i<=n;i++)
	         for(j=k;j<i;j++)
	             f[i][k]=max(f[i][k],f[j][k-1]*a[j+1][i]);
	cout<<f[n][k1]<<endl;
}
