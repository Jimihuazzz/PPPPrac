#include<bits/stdc++.h>
using namespace std;
struct{
	int tm,tc;
}a[100001];
int b[10001];
int n,k,tot,tim,i,j,tmp;
int ans=0,head=0;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>tim>>k;
		while(k--)
		{
			cin>>tmp;
			a[++tot].tc=tmp;
			a[tot].tm=tim;
			if(b[tmp]==0) ans++;
			b[tmp]++;
		}
		while(tim-a[head].tm>=86400)
		{
			tmp=a[head].tc;
			b[tmp]--;
			if(b[tmp]==0) ans--;
			head++;
		}
		cout<<"ans="<<ans<<endl;
	}
	return 0;
}
