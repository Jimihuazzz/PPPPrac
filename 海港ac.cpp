#include<cstdio>
#include<queue>
#define H 86400
using namespace std;
int n,ans,vis[100005];
queue<int>num;
queue<int>t;
queue<int>nat;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int m,c;
        scanf("%d%d",&c,&m);
        num.push(m);
        t.push(c);
        for(int j=1;j<=m;j++)
        {
            int peo;
            scanf("%d",&peo);
            nat.push(peo);
            if(vis[peo]==0) ans++;
            vis[peo]++;
        }
        while(c-H>=t.front())
        {
            int p=num.front();
            t.pop();
            num.pop();
            for(int k=1;k<=p;k++)
            {
               vis[nat.front()]--;
               if(vis[nat.front()]==0) ans--;
               nat.pop();
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
