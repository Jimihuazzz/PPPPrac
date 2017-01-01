#include<bits/stdc++.h>
using namespace std;
const int kk=51;
int m,k,i,j,x,y,l,t,n;
int f[kk][kk];
int a[kk],d[kk];

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
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{

	cin>>m>>k;//m=页数,k=抄书人数。 
	for(i=0;i<=kk-2;i++)
	   for(j=0;j<=kk-2;j++)
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
