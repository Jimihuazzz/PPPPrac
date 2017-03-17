#include<bits/stdc++.h>
using namespace std;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool vis[101][101],mmap[101][101];
int ans;
int trav(int x,int y,int s)
{
	int i,j;
	if(s>ans) ans=s;
	for(int k=0;k<=3;k++)
	{
		int nx=x+dx[k];
		int ny=y+dy[k];
		if(mmap[nx][ny]&&vis[nx][ny])
		{
			vis[nx][ny]=false;
			trav(nx,ny,s+1);
			vis[nx][ny]=true;
		}
	}
	
}
int main()
{
	memset(vis,true,sizeof(vis));
	memset(mmap,false,sizeof(mmap));
	int i,w,h,j,nx,ny;
	ans=0;
	cin>>h>>w;
	char ch;
	for(i=1;i<=w;i++)
		for(j=1;j<=h;j++)
		{
			cin>>ch;
			if(ch=='*')
			 mmap[i][j]=true;
		}
	for(i=1;i<=w;i++)
		for(j=1;j<=h;j++)
			if(mmap[i][j]) trav(i,j,1);
	cout<<ans<<endl;; 
	
	
 } 
