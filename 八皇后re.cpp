#include<bits/stdc++.h> 
using namespace std;

int i,j,n,ans=0;
int a[15];
bool b[15],c[10001],d[10001];

void trav(int i)
{
	if(i==n+1){ 
		if(ans<3){
			for(int k=1;k<=n;k++)
			cout<<a[k]<<" ";
			cout<<endl;
			} 
			ans++;
			return;
			}
	for(int k=1;k<=n;k++)
		if(b[k]&&c[i+k]&&d[i+n-k])
			{
			a[i]=k;	
			b[k]=false;
			c[i+k]=false;
			d[i+n-k]=false;
			trav(i+1);
			b[k]=true;
			c[i+k]=true;
			d[i+n-k]=true;
		}
} 
int main()
{
	memset(b,true,sizeof(b));
	memset(c,true,sizeof(c));
	memset(d,true,sizeof(d)); 
	cin>>n;
	trav(1);
	cout<<ans<<endl; 
	return 0;	
} 
