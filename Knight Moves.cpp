#include<bits/stdc++.h>
using namespace std;
int dx[8] = {-2,-1,1,2,2,1,-1,-2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		struct xq{
			int x,y,dis;
		}q[10001];
		memset(q,0,sizeof(q));
		int l,sx,sy,ex,ey,nx,ny,i,j;
		cin>>l;
		cin>>sx>>sy;
		cin>>ex>>ey;
		if(sx==ex&&sy==ey) cout<<0<<endl;
		else
		{
		bool vis[101][101];
		memset(vis,true,sizeof(vis));
		int r=1,f=1;
		q[f].dis=0;
		q[f].x=sx;
		q[f].y=sy;
		vis[sx][sy]=false;
		while(f<=r)
		{
		   	f++;
			if(q[f].x==ex&&q[f].y==ey) break;
			for(i=0;i<8;i++)
			{
				
				nx=q[f].x+dx[i];
				ny=q[f].y+dy[i];
				if(vis[nx][ny]&&nx<=l&&nx>0&&ny>0&&ny<=l)
				{
					r++;
					vis[nx][ny]=false;
					q[r].x=nx;
					q[r].y=ny;
					q[r].dis=q[f].dis+1;
					
					
				}
			}
		
		}
		cout<<q[r].dis-1<<endl;
		
	}
	}
}
