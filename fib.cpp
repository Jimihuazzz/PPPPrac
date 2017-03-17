#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j;
		int a[21];
		cin>>j;
		a[1]=1;
		a[2]=1;
		for(i=3;i<=j;i++)
			a[i]=a[i-1]+a[i-2];
		cout<<a[j]<<endl;
		
	}
 } 
