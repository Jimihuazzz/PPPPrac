#include<stdio.h>
#include<iostream>
using namespace std;
long long a,b,c;//��Ϊ��a<1000000,�������￪64λ 
int main()
{
//	freopen("openjudge.in","r",stdin);
//	freopen("openjudge.out","w",stdout);
int n,x;
cin>>n;//����n�� 
for(int abc=0;abc<n;abc++)
{
cin>>x;//�����xλ 
if(x==1 || x==2)//�����һ���͵ڶ����� 
cout<<1<<endl;
else//���� 
{
a=b=1;
for(int i=2;i<x;i++)
{
c=a+b;//��� 
//	cout<<a<<'+'<<b<<'='<<c<<'\t';//������Կ��м�Ľ���������ͬѧ���Խ��ע�� 
c%=1000;//ȡģ1000 
a=b,b=c;//���� 
}
cout<<c<<endl;//����� 
}
}
}
