#include<bits/stdc++.h>
using namespace std;
bool a[10001];
int main()
{
	memset(a,true,sizeof(a));
	a[0]=false;
	a[1]=false;
	for(int i=2;i<=100;i++)
		if(a[i])
			 for(int j=2;j<=10000/i;j++)
			 	a[i*j]=false;
	char c[101];
	cin>>c;
	int max=0,min=999999;
	int cc=strlen(c);
	for(int i=0;i<cc;i++)
	{
		int k=1;
		for(int j=0;j<cc;j++)
			if(c[i]==c[j]) k++;
		if(k>max) max=k;
		if(k<min) min=k;
	}
	int pp=max-min;
	if(a[pp])
    {
        printf("Lucky Word\n"); 
        printf("%d",pp);
    } 
    else
    {
        printf("No Answer\n");
		printf("%d",0); 
    } 
	return 0;
				
}
