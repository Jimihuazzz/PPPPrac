#include<bits/stdc++.h>
using namespace std;
bool b[101]={0},c[101]={0},d[101]={0};
int sum=0,a[101];

int print()
{ int i,j;
  sum++;
  cout<<"sum="<<sum<<endl;
  for(i=1;i<=8;i++){
  
     for(j=1;j<=8;j++)
     if(a[i]==j)  cout<<'#'<<"   ";
       else cout<<'^'<<"   ";
  cout<<endl;}
}


int search(int i){
	int j;
	for(j=1;j<=8;j++)
	{
		if((!b[j])&&(!c[i+j])&&(!d[7+i-j]))
		{
		   a[i]=j;
		   b[j]=1;
		   c[i+j]=1;
		   d[i-j+7]=1;
		   if(i==8) print();
		      else search(i+1);
		   b[j]=0;
		   c[i+j]=0;
		   d[i-j+7]=0;	
			
		}
	}
}

int main()
{
	search(1);
}
