#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int m,sx,sy,n;
char mmap[101][101];
void trav(int a,int b)
{	
	int i;
	mmap[a][b]='Z';
	for(i=0;i<4;i++)
	{		
			sx+=dx[i];
			sy+=dy[i];	   
			if(mmap[sx][sy]=='.'&&sx<m&&sx>-1&&sy<n&&sy>-1) trav(sx,sy);
			sx-=dx[i];
			sy-=dy[i];
			
			
			
		}
		
}
int main()
{
	char ch;
	cin>>n>>m;
	while(m!=0&&n!=0)
	{
    	memset(mmap,true,sizeof(mmap));
		int i,j;
		for(i=0;i<m;i++)
			cin>>mmap[i];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
					if(mmap[i][j]=='@')
					{
						sx=i;
						sy=j;
					}
				
		cout<<sx<<sy<<endl;
		trav(sx,sy);
		int sum=0;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			   if(mmap[i][j]=='Z') sum++;
		
		cout<<sum<<endl;
		cin>>n>>m;
	}
}
