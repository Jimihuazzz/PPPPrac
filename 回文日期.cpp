#include<bits/stdc++.h>
using namespace std;
int m[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int n,d1,d2;

bool run(int x)
{
	x/=10000;
	if((x%4==0&&x%100!=0)||(x%400==0))
		return true;
	else return false;
}

bool huiwen(int x)
{
	int pp=x%10*1000+x%100/10*100+x%1000/100*10+x%10000/1000;
	x/=10000;
	//cout<<"pp="<<pp<<endl;
	//cout<<"x="<<x<<endl;
	if(x==pp) return true;
	else return false;
}

bool ch(int x)
{
	int pp=x%10*1000+x%100/10*100+x%1000/100*10+x%10000/1000;
	int dd1=d1%100,dd2=d2%100;
	int m1=d1/1000000%100,m2=d2/1000000%100;
	if(pp)
}

int main()
{
	int ans=0;
	cin>>d1>>d2;
	if(d1==d2)
	{
		if(huiwen(d1)) ans++;
	}
	else
	{
		int y1=d1/10000,y2=d2/10000;
		for(int i=y1;i<=y2;i++)
		{
			if(ch(i)) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
