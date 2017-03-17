#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	 a[1001];
	a[1]=1;
	a[2]=3;
	for(i=3;i<=n;i++)
	    a[i]=a[i-1]+a[i-2]*2;
	cout<<a[n]<<endl;
}
