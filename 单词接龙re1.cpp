#include<bits/stdc++.h>
using namespace std;
long long zc=0;
int n;
string dc[20];
int yg[20];
void jl(string dq,string sg)
{
	int lsg=sg.size();
	for(int i=0;i<n;i++)
	{
		int lc=dc[i].size();
		bool tf=false;
		int jk=0;
		if(sg.size()==1&&dc[i][0]==sg[0]) tf=true;
		
		if(!tf&&yg[i]!=0)
		{
			for(int j=lsg-1;j>0;j--)
			{
				bool tc=true;
				for(int k=0;k<lc-1&&j+k<lsg;k++)
				{
					if(sg[j+k]!=dc[i][k])
					{
						tc=false;
						break;
					}
				}
					if(tc)
					{
						jk=lsg-j;
						tf=true;
					}
					if(tf&&!tc) break;
					
				}
			}
			if(tf)
			{
				yg[i]--;
				string ndq=dq;
				for(int j=jk;j<lc;j++)
					ndq+=dc[i][j];
				jl(ndq,dc[i]);
				yg[i]++;
			}
		}
	if(zc<dq.size())
		zc=dq.size();	
	}
	


int main()
{
	for(int i=0;i<20;i++)
		yg[i]=2;
	string dr;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>dc[i];
	cin>>dr;
	jl("",dr);
	cout<<zc<<endl;
	return 0;
}
