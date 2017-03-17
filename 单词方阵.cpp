#include<bits/stdc++.h>
using namespace std;
int dx[8]={1,1,1,0,0,-1,-1,-1};
int dy[8]={0,1,-1,1,-1,0,1,-1};
bool ok[101][101],shuchu[101][101];
int mmap[101][101];
int n;
char c[7]={'y','i','z','h','o','n','g'};

void trav(int x,int y,int k,int p)
{
	if(p==6) 
	{
		int lx=x;
		int ly=y;
		for(int i=1;i<8;i++)
			{
				lx-=dx[k];
				ly-=dy[k];
				shuchu[lx][ly]=true;
				cout<<"succ"<<endl;
			}
		
	 }
	else{
		int nx=x+dx[k];
		int ny=y+dy[k];
		if(nx>0&&nx<=n&&ny>0&&ny<=n&&mmap[nx][ny]==c[p])
			trav(nx,ny,k,p+1);
		else return;
		
	} 
	cout<<"suc"<<endl; 
}
int main()
{
	cin>>n;
	char ch;
	int k;
	memset(shuchu,false,sizeof(shuchu));
	memset(ok,false,sizeof(ok));
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			mmap[i][j]=-1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			{
				bool f=false;
				cin>>ch;
				for( k=0;k<7;k++)
					if(c[k]==ch) mmap[i][j]=k;
				 
			}
	//int ans=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(mmap[i][j]==0) 
			{
			
				for(int k=0;k<8;k++)
					trav(i,j,k,0);
			
		}
	//cout<<"ans="<<ans<<endl;
	cout<<endl;
		for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(shuchu[i][j]) cout<<c[mmap[i][j]];
			else cout<<"*";
		cout<<endl;
		
		}
		for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(mmap[i][j]!=-1)
				cout<<setw(4)<<mmap[i][j];
			else cout<<setw(4)<<"*";
		cout<<endl;
		}
	
}
