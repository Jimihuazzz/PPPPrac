#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
struct chuan{
	int tm,ct;
}a[300001];
int b[100001];
int n,k,t;
int tim,i,j,tmp;
int ans=0,head;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>tim>>k;
		while(k--)
		{
			cin>>tmp;
			a[++t].tm=tim;
			a[t].ct=tmp;
			if(b[tmp]==0) ans++;
			b[tmp]++;
		}
		while(tim-a[head].tm>=86400)
		{
			tmp=a[head].ct;
			b[tmp]--;
			if(b[tmp]==0)
				ans--;
			head++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
