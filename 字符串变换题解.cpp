#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN = 100000 + 10;
int f[MAXN];
int n, k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=i-1;j>=i-k&&j>=0;j--)
            f[i]+=f[j];
        if(i<=k) f[i]++;
        f[i] %=100003;
    }
    cout<<f[n];
    return 0;
}
