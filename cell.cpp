#include<bits/stdc++.h>
using namespace std;
int a[101][101],num=0,m,n;
int runx[4]={1,-1,0,0},runy[4]={0,0,1,-1};
int bfs(int i,int j){
	int x,y,tail,head,k;
	int h[1001][2];
	num++;a[i][j]=0;
	tail=0;head=1;
	h[1][1]=i;h[1][2]=j;
	while(tail<head)
	{
		tail++;
		for(k=0;k<=3;k++){
		
		    x=h[tail][1]+runx[k];y=h[tail][2]+runy[k];
		    if((x>=0)&&(x<m)&&(y>=0)&&(y<n)&&(a[x][y]))
		       {
		       	head++;
		       	h[head][1]=x;
		       	h[head][2]=y;
		       	a[x][y]=0;
			   }
	}
	}
	
}

int main()
{
	int i,j;
	cin>>m>>n;
     char s[101];
     for(i=0;i<=m-1;i++)
        for(j=0;j<=n;j++)
           a[i][j]=1;
    for(i=0;i<=m-1;++i){
    	gets(s);
    	for(j=0;j<=n;j++)
    	      if(s[j]=='0') a[i][j]=0;
    	    
    	
	}
	for(i=0;i<=m-1;i++)
	   for(j=0;j<=n-1;j++)
	       if(a[i][j])
	           bfs(i,j);
	
	cout<<num;
	return 0;
  	
	
}
