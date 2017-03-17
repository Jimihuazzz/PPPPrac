#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
bool vis[1001][1001];
int ex,ey,n,m;
int ans=0; 
void trav(int x,int y)
{
	if(x==ex&&y==ey) ans++;
	else
	for(int k=0;k<4;k++)
	{
		int nx=x+dx[k];
		int ny=y+dy[k];
		if(nx>0&&nx<=n&&ny>0&&ny<=m&&vis[nx][ny])
		{
			vis[nx][ny]=false;
			trav(nx,ny);
			vis[nx][ny]=true;
		}
	}
}
int main()
{
	int t,sx,sy;
	memset(vis,true,sizeof(vis));
	cin>>n>>m>>t;
	cin>>sx>>sy>>ex>>ey;
	for(int i=1;i<=t;i++)
		{
			int lx,ly;
			cin>>lx>>ly;
			vis[lx][ly]=false;
		}
	vis[sx][sy]=false;
	trav(sx,sy);
	cout<<ans<<endl;
	return 0;
}
