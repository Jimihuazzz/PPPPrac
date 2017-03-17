#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	while(m%n!=0)
	{
		int temp=n;
		n=m%n;
		m=temp;
	}
	cout<<n;
}
