#include<bits/stdc++.h>
using namespace std;
struct chuan{
	int tm,tc;	
}a[1000001];
int b[100001];
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
			a[++tot].tm=tim;
			a[tot].tc=tmp;
			if(b[tmp]==0) ans++;
			b[tmp]++;
		}
		while(tim-86400>=a[head].tm)
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
