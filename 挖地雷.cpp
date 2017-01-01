#include<bits/stdc++.h>
using namespace std;

int main()
{
   long f[201]={0},w[201],c[201]={0};
   bool a[201][201]={0};
   memset(f,0,sizeof(f));
   memset(a,false,sizeof(a));
   memset(c,0,sizeof(c));
   int i,j,n,x,y,l,k,maxx;
   cin>>n;	
   for(i=1;i<=n;i++)
   cin>>w[i];
   while((x!=0)||(y!=0))
   {
   	cin>>x>>y;
   	if((x!=0)&&(y!=0)) a[x][y]=true;
	} 
	f[n]=w[n];
    for(i=n-1;i>=1;i--)
    {
    	l=0;k=0;
    	for(j=i+1;j<=n;j++)
    	   if((a[i][j])&&(f[j]>l))  {
    	   	l=f[j];
    	   	k=j;
		   }
    	f[i]=l+w[i];
    	c[i]=k;
    	
	}
    k=1;
    for(i=1;i<=n;i++)
       if(f[i]>f[k])  k=i;
       maxx=f[k];
       
    while(k!=0)
    {
    	cout<<k<<"-->";
    	k=c[k];
	}
	cout<<endl;
	cout<<maxx<<endl;
return 0;
}
