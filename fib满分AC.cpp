#include<stdio.h>
#include<iostream>
using namespace std;
long long a,b,c;//因为是a<1000000,所以这里开64位 
int main()
{
//	freopen("openjudge.in","r",stdin);
//	freopen("openjudge.out","w",stdout);
int n,x;
cin>>n;//输入n个 
for(int abc=0;abc<n;abc++)
{
cin>>x;//输入第x位 
if(x==1 || x==2)//处理第一个和第二个数 
cout<<1<<endl;
else//否则 
{
a=b=1;
for(int i=2;i<x;i++)
{
c=a+b;//相加 
//	cout<<a<<'+'<<b<<'='<<c<<'\t';//这里可以看中间的结果，不会的同学可以解除注释 
c%=1000;//取模1000 
a=b,b=c;//更新 
}
cout<<c<<endl;//输出答案 
}
}
}
