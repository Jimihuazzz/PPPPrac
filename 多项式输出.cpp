#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=n;i>1;i--)
	{
		string ch;
		gets(ch);
		cout<<ch<<"x^"<<i;
	}
	char ch;
	cin>>ch;
	cout<<ch;
	return 0;
}
