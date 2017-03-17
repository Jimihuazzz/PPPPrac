#include<bits/stdc++.h>
using namespace std;
int number[101],i=0,p=1;
char sym[101],s[256],t[256]; 
void push()
{
	sym[++p]=s[i];
}
void pop()
{
	switch(sym[p--])
	{
		case'+':number[p]+=number[p+1];break;
		case'-':number[p]-=number[p+1];break;
		case'*':number[p]*=number[p+1];break;
		case'/':number[p]/=number[p+1];break;
	}
}
bool can()
{
	if((s[i]=='+'||s[i]=='-')&&sym[p]!='(' )return true;
	if((s[i]=='*'||s[i]=='/')&&(sym[p]=='*'||sym[p]=='/'))return true;
	return false;
}
int main()
{
	

	gets(s);
	s[strlen(s)]=')';
	sym[p]='(';
	
	
	while(i<strlen(s))
	{
		while(s[i]=='(')
		{
			push();i++;
		}
		
		
		int x=0;
		while(s[i]>='0'&&s[i]<='9')
		    x=x*10+s[i++]-'0';
		number[p]=x;
		
		
		while(i<strlen(s)&&s[i-1]==')')
		{
			if(s[i]==')')
			{
				while(sym[p]!='(') pop();
				number[--p]=number[p+1];
			}
			else
			{
				while (can()) pop();
				push();
			}
			i++;
		}
	}
	cout<<"+++"<<endl;
	cout<<number[0]<<endl;
	
}
