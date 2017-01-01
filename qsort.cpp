#include<iostream>
using namespace std; 
int a[101];
void qsort(int left,int right)
{
	int i,j,mid ;
	i=left;j=right;
	mid=a[(left+right)/2];
	while(a[i]<mid) i++;
	while(a[j]>mid) j--;
	while(i<=j){
		int temp;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
		
	}
	if(i<right) qsort(i,right);
	if(j>left) qsort(left,j);
	
}
int main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++) 
	   cin>>a[i];
	qsort(1,n);
	for(i=1;i<=n;i++)
	   cout<<a[i]<<"   ";
	cout<<endl;
	return 0;
}
