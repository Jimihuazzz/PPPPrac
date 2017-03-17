#include<bits/stdc++.h>
#define LONGINF 0x7fffffffffffffff
using namespace std;

long long a[201],f1[210][210],f2[210][210],s[210];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			a[i+n]=a[i];
		}
	s[0]=0;
	for(int i=1;i<2*n;i++)
		s[i]=s[i-1]+a[i];
	for(int k=1;k<n;k++)
		for(int i=1;i<=2*n-k;i++)
		{
			f1[i][i+k]=LONGINF;
			f2[i][i+k]=0;
			for(int j=i;j<i+k;j++)
			{
				f1[i][i+k]=min(f1[i][i+k],f1[i][j]+f1[j+1][i+k]);
				f2[i][i+k]=max(f2[i][i+k],f2[i][j]+f2[j+1][i+k]);
			}
			f1[i][i+k]+=s[i+k]-s[i-1];
			f2[i][i+k]+=s[i+k]-s[i-1];
		}
	long long ans1=f1[1][n],ans2=f2[1][n];
	for(int i=1;i<=n;i++)
		{
			ans1=min(ans1,f1[i][i+n-1]);
			ans2=max(ans2,f2[i][i+n-1]);
		}
	cout<<ans1<<endl<<ans2<<endl;
	return 0;
}
