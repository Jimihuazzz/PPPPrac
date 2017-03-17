#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

int t;
bool endd=false;
string sp="|     ";

void f(int x,string name)
{
	string fi[47];
	string in;
	int p=0;
	bool s=false,rd=true;
	cin>>in;
	if(in[0]=='#')
	{
		endd=true;
		return;
	}
	else rd=false;
	if(x==0) cout<<"DATA SET:"<<++t<<":/n";
	while(!s)
	{
		if(rd) cin>>in;
		switch(in[0])
		{
			case 'f':fi[p++]=in;break;
			case 'd':f(x+1,in);break;
			case '#':s=true;endd=true;break;
			case '*':s=true;break;
			case ']':s=true;break;
		}
		if(!rd) rd=true;
	}
	sort(fi,fi+p);
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<x;j++) cout<<sp;
		cout<<fi[i]<<endl;
	}
}

int main()
{
	while(!endd)
	{
		f(0,"ROOT");
		if(!endd) cout<<endl;
	}
	return 0;
}
 
