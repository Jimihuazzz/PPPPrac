#include<bits/stdc++.h>
using namespace std;

int main()
{
	int f[1001],a[1001],b[1001];
	bool ok[1001];
	int max,i,j,k,n;
	cin>>n;
	for(i=1;i<=n;i++)
	    cin>>a[i];
	b[1]=1;
	f[1]=1;
	for(i=2;i<=n+1;i++)
	{
		max=0;
		f[i]=1;
		for(j=i-1;j>=1;j--)
		    if(a[i]<a[j])
		       if(b[j]>max)
		     {
		     	max=b[j];
		     	memset(ok,1,sizeof(ok));
		     	ok[a[j]]=false;
		     	f[i]=f[j];
			}
		    else
		    {
		    	if(b[j]==max&&ok[a[j]])
		    	{
		    		ok[a[j]]=false;
		    		f[i]+=f[j];
				}
			}
		b[i]=max+1;
			
	 } 
	 cout<<b[n+1]-1<<endl;
	 cout<<f[n+1]<<endl;
 } 
