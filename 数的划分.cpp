#include<bits/stdc++.h>
using namespace std;
int n,k;
int trav(int m,int n)
{
	if(m<n) return 0;
	if(m==n) return 1;
	if(n==1) return 1;
	if(m<0) return 0;
	return trav(m-1,n-1)+trav(m-n,n); 
}
int main()
{
	cin>>n>>k;	
	cout<<trav(n,k)<<endl;
	return 0;
}
