#include<bits/stdc++.h>
using namespace std;
const int MAXN=100000+10;
int f[MAXN];
int n,k;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=0&&j=i-k;j--)
			f[i]+=f[j];
		if(i<=k)	f[i]++;
		f[i]%=100003;
	}
	cout<<f[n]<<endl;
	return 0;
}
