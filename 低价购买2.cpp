#include<bits/stdc++.h>
using namespace std;

int main()
{
     int k,i,j,n,max;
	 int p[1001],t[1001][2];
	 struct price{
	 	int longest,solution;
	 }d[1001];
	 cin>>n;
	 for(i=1;i<=n;i++)
	     cin>>p[i];
	 p[n+1]=-1;
	 d[1].longest=d[1].solution=1;
	 for(i=2;i<=n+1;i++)
	 {
	 	max=0;
	 	for(j=1;j<i;j++)
	 	   	if(p[j]>p[i]&&d[j].longest>max)
	 	   	    max=d[j].longest;
	 	d[i].longest=max+1;
	 	d[i].solution=0;
	 	memset(t,0,sizeof(t));
	 	if(!max) d[i].solution=1;
	 	else for(j=1;j<i;j++)
	 	         if(d[j].longest==max&&p[j]>p[i])
	 	        {
	 	        	k=1;
	 	        	while(t[k][0]!=p[j]&&t[k][0]!=0) k++;
	 	        	if(!t[k][0])
	 	        	 {
	 	        	 	t[k][0]=p[j];
	 	        	 	t[k][1]=d[j].solution;
	 	        	 	d[i].solution+=d[j].solution;
					  }
					  else{
					     if(t[k][1]<d[j].solution)
					          d[i].solution+=d[j].solution-t[k][1];
					      t[k][1]=d[j].solution;
					  }
				 }
				 
	 	   	
		
	 	
		 }	
		 cout<<d[n+1].longest-1<<endl;
		 cout<<d[n+1].solution<<endl;
 } 
