#include<bits/stdc++.h>
using namespace std;
int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int A,B,ans,maxy,miny,maxm,minm,maxd,mind;

int ch(int x)
{
	int m=x%10*10+x%100/10;
	int d=x/100%10*10+x/1000;
	if(m>=1&&m<=12)
	{
		if(d>=1)
		{
			if(m==2&&((x%400==0)||(x%4==0&&x%100!=0))) day[2]=29;
				else day[2]=28;
			if(d<=day[m]) return 1;
		}
		
	}
	return 0;
}

int main()
{
	ans=0;
	cin>>A>>B;
	maxy=B/10000,maxm=B%10000/100,maxd=B%100;
	miny=A/10000,minm=A%10000/100,mind=A%100;
	int mm=maxy%10*10+maxy%100/10;
	int dd=maxy/100%10*10+maxy/1000;
	if(maxm<mm)
		maxy--;
	else 
		if(maxm==mm)
			if(dd>maxd)	maxy--;
	
	
	mm=miny%10*10+miny%100/10;
	dd=miny/100%10*10+miny/1000;
	if(minm>mm)
		miny++;
	else 
		if(minm==mm)
			if(dd<mind)	miny++;
			
	
	if(miny<=maxy)
		for(int i=miny;i<=maxy;i++)
			ans+=ch(i);
	cout<<ans<<endl;
}
