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
	char a[pp],b[pp];
	int l1,l2,i,j,n,k;
	string z=""; 
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
	for(i=1;i<=l1;i++)
	    for(j=1;j<=l2;j++)
		   if(a[i-1]==b[j-1])
		       c[i][j]=c[i-1][j-1]+1;
		   else c[i][j]=max(c[i-1][j],c[i][j-1]);
	cout<<c[l1][l2]<<endl;
	i=l1;
	j=l2;
 	while(i&&j)
 	if(z.length()==c[l1][l2]) break;
 	else
 	if(a[i-1]==b[j-1])
 	{
 		z=a[--i]+z;
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
