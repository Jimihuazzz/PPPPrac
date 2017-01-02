#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int m,sx,sy,x,y,n;
bool mmap[101][101],vis[101][101],p[101][101];
void trav(int a,int b)
{	
	int i;
	p[a][b]=1;
	for(i=0;i<4;i++)
	{		
			x+=dx[i];
			y+=dy[i];	   
			if(mmap[x][y]&&x<=m&&x>0&&y<=n&&y>0) trav(x,y);
			y-=dy[i];
			x-=dx[i];
			
			
		}
		
}
int main()
{
	memset(p,0,sizeof(p));
    memset(mmap,true,sizeof(mmap));
    memset(vis,false,sizeof(vis));
	char ch;
	cin>>n>>m;
	while(m!=0&&n!=0)
	{
		int i,j;
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				{
					cin>>ch;
					if(ch=='#') mmap[i][j]=false;
					if(ch=='@')
					{
						sx=x=i;
						sy=y=j;

					}
				}
		trav(sx,sy);
		int sum=0;
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
			   if(p[i][j]==1) sum++;
		
		cout<<sum<<endl;
		cin>>n>>m;
	}
}
