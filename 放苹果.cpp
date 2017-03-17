#include<bits/stdc++.h>
using namespace std;

int dfs(int m,int n)
{
	if(m==1||n==1) return 1;
	if(m<n) return dfs(m,m);
	if(m==n) return 1+dfs(m,n-1);
	if(m>n) return dfs(m,n-1)+dfs(m-n,n);
}
int main()
{
	int m,n,t;
	cin>>t;
	while(t--)
	{
	cin>>m>>n;
	cout<<dfs(m,n)<<endl;
	}
}
