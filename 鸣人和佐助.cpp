#include<bits/stdc++.h>
using namespace std;
int main()
{
	int nx,ny,ex,ey,sx,sy,f,r,m,n,t,i,j;
	struct {
		int x,y,z,tt;
	}q[1001];
	int dx[4]={0,0,1,-1};
	int dy[4]={1,-1,0,0};
	bool mmap[101][101],vis[101][101];
	cin>>m>>n>>t;
	char ch;
	memset(vis,true,sizeof(vis));
	memset(q,0,sizeof(q));
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++){
			
			cin>>ch;
			if(ch=='@') {
				sx=i;sy=j;
			}
			if(ch=='+')
			{
				ex=i;ey=j;
			}
			if(ch=='*') mmap[i][j]=0;
			if(ch=='#') mmap[i][j]=1;
		}
	f=1;
	r=1;
	q[f].x=sx;
	q[f].y=sy;
	q[f].z=t;
	q[f].tt=0;

	vis[sx][sy]=false;
	while(f<=r)
	{
		if(q[f].z<0) break;
		if(q[f].x==ex&&q[f].y==ey) break;
		for(i=0;i<4;i++)
		{
		    nx=q[f].x+dx[i];
			ny=q[f].y+dy[i];
			if(q[f].z>q[r+1].z&&nx>0&&nx<=m&&ny<=n&&ny>0)	
			if(mmap[nx][ny]) 
			{
				r++;
				q[r].x=nx;
				q[r].y=ny;
				vis[nx][ny]=false;
				q[r].tt=q[f].tt+1;
				q[r].z=q[f].z;
				
				
		}
	}
		for(i=0;i<4;i++)
		{
		    nx=q[f].x+dx[i];
			ny=q[f].y+dy[i];
			if(q[f].z>q[r+1].z&&nx>0&&nx<=m&&ny<=n&&ny>0)	
			if(!mmap[nx][ny]) 
			{
				r++;
				q[r].x=nx;
				q[r].y=ny;
				vis[nx][ny]=false;
				q[r].tt=q[f].tt+1;
				q[r].z=q[f].z-1;
				
				
		}
	}
		f++;
	}



	if(!vis[ex][ey]) cout<<q[f].tt<<endl;
		else cout<<-1<<endl;

}
