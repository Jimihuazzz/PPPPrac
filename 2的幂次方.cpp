#include<bits/stdc++.h>
using namespace std;
int ans=0,m;
int a[1001];
int f(int i)
{
	int pp=1,k;
	for(k=1;k<=i;k++)
		pp*=2;
	return pp;
}
void s(int n)
{
	if(m-f(n)==0)
	 {
	a[++ans]=n;
	return;
	}
	else if(m<f(n))
	{
		a[++ans]=-1;
		m=m-f(n-1);
		s(0);
	 }
	 else  s(n+1);
}
int main()
{
	cin>>m;
	s(0);
	for(int i=1;i<=ans;i++)
		cout<<a[i]<<"    ";

}
