#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int b[100][4];
int main()
{
	int i,j,l,k,n;
	cin>>n;
	for(i=1;i<=n;i++)
	   {
	   	cin>>b[i][1];
	   	b[i][2]=1;
	   	b[i][3]=0;
	   }
	for(i=n;i>=1;i--)
	{
		l=0;k=0;
		for(j=i+1;j<=n;j++)
		{
			if((b[j][1]>b[i][1])&&(b[j][2]>l))
			{
			
				l=b[j][2];
				k=j;
			}
			if(l>0)
			{
				b[i][2]=l+1;
				b[i][3]=k;
			}
		}
	}
	k=1;
	for(i=1;i<=n;i++)
	   if(b[i][2]>b[k][2]) k=i;
	cout<<b[k][2]<<endl;   
	while(k!=0)
	{
		cout<<b[k][1]<<"   ";
		k=b[k][3]; 
	}
	cout<<endl; 
	return 0;
}
