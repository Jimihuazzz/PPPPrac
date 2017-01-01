#include<bits/stdc++.h>
using namespace std;
int a[101],best[101],maxnum=0,n,v[101][101];
bool b[101];
void ord(int step,int t)
{
	int j;
	for(int i=1;i<=n;i++)
	
	 if(b[i]==1)  {
	 
	    a[step]=i;
	    b[i]=0;
	    t+=v[step][i];
	    if(step<n) ord(step+1,t);
	      else if(t>maxnum){
		  
	      	maxnum=t;
	      	for(int p=1;p<=n;p++){
			  
	      	   best[p]=a[p];
	            cout<<a[p]<<"   ";
				}
				cout<<endl;
	      }
	    t-=v[step][i];
		a[step]=0;  
	    b[i]=1;
		  
}


}
int main()
{
	int i,j;
	cin>>n;
	memset(b,1,sizeof(b));
	memset(a,0,sizeof(a));
	for(i=1;i<=n;i++)
	   for(j=1;j<=n;j++)
	      cin>>v[i][j];
    ord(1,0);
    for(i=1;i<=n;i++)  cout<<best[i]<<"   ";
    cout<<endl;
    cout<<"The max value is"<<maxnum<<endl;
	return 0;
	
}

