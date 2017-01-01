#include<bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
	return a<b?a:b;
}
int main()
{
	char s1[101],s2[101];
	int f[101][101];
	int i,j,k,m,n;
	cin>>s1>>s2;
	m=strlen(s1);
	n=strlen(s2);
	for(i=1;i<=m;i++)
	     f[i][0]=i;
	for(i=1;i<=n;i++)  
	    f[0][i]=i;
	for(i=1;i<=m;i++)
	    for(j=1;j<=n;j++)
	        if(s1[i-1]==s2[j-1])  f[i][j]=f[i-1][j-1];
	        else f[i][j]=min(min(f[i-1][j],f[i][j-1]),f[i-1][j-1])+1;
	cout<<f[m][n]<<endl;
}
