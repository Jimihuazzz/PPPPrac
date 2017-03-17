#include<bits/stdc++.h> 
using namespace std;

int f[10001],n,k,b[10001],e[10001];
int main()
{
	int i,j;
	cin>>n>>k;
	for(i=1;i<=k;i++)
		cin>>b[i]>>e[i];
	int p=k;
	for(i=n;i>=1;i--)
	{
		if(i!=b[p]) f[i]=f[i+1]+1;
		else
		{
			while(i==b[p])
			{
				f[i]=max(f[i],f[i+e[p]]);
				p--;
			}
		}
	}
	cout<<f[1]<<endl;
	return 0;
}
