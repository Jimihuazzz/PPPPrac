#include<bits/stdc++.h>
using namespace std;
char a,b,c;
int ans;
void trav(char a,char b,char c,int n)
{
	if(n==1) cout<<a<<"->"<<n<<"->"<<c<<endl;	
	else{
		trav(a,c,b,n-1);
		cout<<a<<"->"<<n<<"->"<<c<<endl;
		trav(b,a,c,n-1);
	}
}
int main()
{
	ans=0;
	int n;
	cin>>n;
	cin>>a>>b>>c;
	trav(a,c,b,n);
	return 0;
}
