#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<bits/stdc++.h>

using namespace std;

bool endd=false;
int t;
string sp="|     ";

void f(int x,string name)
{
	int p=0;
	string fi[47];
	bool s=false,rd=true;
	string in;
	cin>>in;
	if(in[0]=='#')
	{
		endd=true;
		return;
	}
	else rd=false;
	if(x==0) cout<<"DATA SET "<<++t<<":\n";
	for(int j=0;j<x;j++) cout<<sp;
	cout<<name<<endl;
	while(!s)
	{
		if(rd)	cin>>in;
		switch(in[0])
		{
			case 'f':fi[p++]=in;break;
			case 'd':f(x+1,in);break;
			case ']':s=true;break;
			case '*': s=true; break;
			case '#': s=true; endd=true; break;
		}
		if(!rd) rd=true;
	}
	sort(fi,fi+p);
	for(int i=0;i<p;i++){
		for(int j=0;j<x;j++)	cout<<sp;
	cout<<fi[i]<<endl;
	}
	
}
int main()
{
	while(!endd)
	{
		f(0,"ROOT");
		if(!endd)cout<<endl;
	}
	return 0;
}
