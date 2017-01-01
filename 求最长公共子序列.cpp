#include<bits/stdc++.h>
using namespace std;
const int pp=101;
int max(int a,int b)
{
	return a>b?a:b; 
 } 
int main()
{
	int c[pp][pp];
	char x[pp],y[pp];
	int n,i,j,l1,l2;
	string z="";
	cin>>x>>y;
	l1=strlen(x);
	l2=strlen(y);
	for(i=1;i<=l1;i++)
	    for(j=1;j<=l2;j++)
	        if(x[i-1]==y[j-1])
	            c[i][j]=c[i-1][j-1]+1;
	    	else 
	    	    c[i][j]=max(c[i-1][j],c[i][j-1]);
	cout<<c[l1][l2]<<endl;
	i=l1;
	j=l2;
	while(i&&j)
	if(x[i-1]==y[j-1])
	{
		z=x[--i]+z;
		j--;
	}
	else
	{
		if(c[i-1][j]>c[i][j]) i--;
		else j--;
	}
	cout<<z.c_str()<<endl;
	return 0;
	        
	
}
