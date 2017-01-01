#include<bits/stdc++.h>
using namespace std;
const int kk=101;
int f[kk][kk],a[kk],d[kk];
int i,j,n,t,x,l,k,m;
int print(int i,int j)
{
	int t,x;
	if(j==0) return 0;
	if(j==1)
	{
		cout<<1<<setw(4)<<i<<endl;
		return 0;
	}
	t=i;x=a[i];
	while(x+a[t-1]<=f[k][m])
	{
		x+=a[t-1];
		t--;
	}
	print(t-1,j-1);
	cout<<t<<setw(4)<<i<<endl;
}
int main()
{
	cin>>m>>k;
	for(i=0;i<=kk;i++)
	    for(j=0;j<=kk;j++)
	    	f[i][j]=10000;
	for(i=1;i<=m;i++)
	   {
	   	cin>>a[i];
	   	d[i]=d[i-1]+a[i];
	   	f[1][i]=d[i];
	   }
	for(i=2;i<=k;i++)
		for(j=1;j<=m;j++)
			for(l=1;l<=j-1;l++)
			  	if(max(f[i-1][l],d[j]-d[l])<f[i][j])
			  	    f[i][j]=max(f[i-1][l],d[j]-d[l]);
	print(m,k);
	return 0;
}
