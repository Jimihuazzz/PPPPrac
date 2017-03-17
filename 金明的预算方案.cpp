#include<bits/stdc++.h>
using namespace std;

struct base{
	int n,m,wm,next;
}group[65];
int head[100001],n,m,mlin=0;
int dp[32005],tdp[32005];

int main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		int m,q,p;
		cin>>m>>p>>q;
		if(q==0)
		{
			mlin++;
			group[mlin]=(base){i,m,p*m,head[i]};
			head[i]=mlin;
		}
		else
		{
			for(int j=head[q];j>0;j=group[j].next)
			{
				mlin++;
				group[mlin]=(base)
				{
					i,m+group[j].m,p*m+group[j].wm,head[q]
				};
				head[q]=mlin;
			}
		}
	}
		for(int i=1;i<=n;i++)
		{
			for(int j=head[i];j>0;j=group[j].next)
			{
				int mm=group[j].m;
				int wm=group[j].wm;
				for(int k=m;k>=mm;k--)
				{
					tdp[k]=max(max(tdp[k],dp[k]),wm+dp[k-mm]);
				}
			}
			for(int k=m;k>=1;k--)
			{
				dp[k]=max(dp[k],tdp[k]);
				tdp[k]=0;
			}
		}
		cout<<dp[m]<<endl;
		return 0;
		
	}
  
