#include<bits/stdc++.h>
using namespace std;
int main()
{
	int xx,yy,i,j,nx,ny,sx,sy;
	bool mmap[101][101],vis[101][101];
	int dx[4]={0,0,1,-1};
	int dy[4]={1,-1,0,0};
	struct cizhuan{
		int x,y,v;
	}q[1001];
	cin>>xx>>yy;
	int pp=0;
	memset(mmap,true,sizeof(mmap));
	memset(vis,true,sizeof(vis));
	memset(q,0,sizeof(q));
	for(i=1;i<=xx;i++)
		for(j=1;j<=yy;j++)
			{
				char ch;
				cin>>ch;
				if(ch=='@')
				{
					sx=i;
					sy=j;
				}
				if(ch=='#') {
				    
					pp++;	
					mmap[i][j]=false;
					}
			}
	int f=1,r=1;
	q[f].x=sx;
	q[f].y=sy;
	q[f].v=0;
	vis[sx][sy]=false;
	bool b;
	while(f<=r)
	{
		for(i=0;i<=3;i++)
		{
		    if(b) break;	
		    b=true;
			nx=q[f].x+dx[i];
			ny=q[f].y+dy[i];
			if(mmap[nx][ny]&&vis[nx][ny]&&nx<=xx&&nx>0&&ny<=yy&&ny>0)
			{
				r++;
				q[r].x=nx;
				q[r].y=ny;
				q[r].v=q[f].v+1;
				
				b=false;
			}
		}
		f++;
	}
	cout<<q[f].v<<endl;
	
} 
