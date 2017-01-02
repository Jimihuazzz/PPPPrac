#include<bits/stdc++.h>
using namespace std;
const int kk=101;
int d[kk],f[kk][kk],a[kk];
int i,j,m,n,k,l;
int print(int i,int j)
{
	if(j==0) return 0;
	if(j==1)
	{
		cout<<1<<setw(4)<<i<<endl;
		return 0;
	}
	int t=i;int x=a[i];
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
	cin>>m>>k;
	for(i=0;i<=kk-1;i++)
	    for(j=0;j<=kk-1;j++)
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
	  		 	if(max(d[j]-d[l],f[i-1][l])<f[i][j])
	  		 		f[i][j]=max(d[j]-d[l],f[i-1][l]);
	  	
	print(m,k);
	return 0; 		
	  			
			  
}
