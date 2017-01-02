#include<bits/stdc++.h>
using namespace std;
int a[100000001];
int trav(int p)
{
	if(p==1) return a[1];
	if(p==2) return a[2];
	if(a[p]==0) a[p]=trav(p-1)+trav(p-2);
	return a[p];
	
}
int main()
{
    int n,p;
	memset(a,0,sizeof(a));
	a[1]=1;
	a[2]=1;
	cin>>n;
	while(n--)
	{
		cin>>p;
		cout<<trav(p)%1000<<endl;
	 } 
	
	
 } 
