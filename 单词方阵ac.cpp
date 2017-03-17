#include<iostream> 
#include <cstdio>
#include <cstring>
using namespace std;
const int N = 105;
char s[N][N], a[] = "yizhong";
bool vis[N][N];
int n;
int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1},
    dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};
void dfs(int x,int y,int w,int i)//x,y,��ʾ���꣬w��ʾ����i��ʾ�ڼ����ַ���
{
    if(w==-1)//����ǵ�һ����
    {
        for(int j=0;j<8;j++)
        {
            int xx=x+dx[j];
            int yy=y+dy[j];
            if(s[xx][yy]==a[i]) 
              dfs(xx,yy,j,i+1);//��չ����;
        }
        return;
    }
    if(i==7)//����Ѿ��ҵ�����ַ��������ݱ�ǡ�
    {
        int xx=x,yy=y;
        for(int j=1;j<=7;j++)
         {
               vis[xx][yy]=1;
               xx=xx-dx[w];
               yy=yy-dy[w];
         }
         return;
    }
    int xx=x+dx[w];
    int yy=y+dy[w];
    if(s[xx][yy]==a[i])
      dfs(xx,yy,w,i+1);
}
int main()
{
    memset(s,'*',sizeof s);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
      scanf("%s",s[i]+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
          if(s[i][j]=='y') dfs(i,j,-1,1);
    }
    for(int i=1;i<=n;cout<<endl,i++)
      for(int j=1;j<=n;j++) 
      {
         if(vis[i][j]) cout<<s[i][j];
         else cout<<'*';
      }
    return 0;    
}
