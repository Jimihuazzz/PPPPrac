#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

long long f[1001];
int a[100001];
int main()
{
	int n,m;
	cin>>n>>m;
	f[0]=1;
	int i,j;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		for(j=m;j>=a[i];j--)
			f[j]+=f[j-a[i]];
	cout<<f[m]<<endl;
	return 0;
 } 
