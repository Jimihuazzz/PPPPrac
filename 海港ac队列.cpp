#include <cstdio>
struct NOI{
    int tm,ct;
}a[300005];
int b[100005];    //b[i]记录【二十四小时内】有多少个国籍为i的人
int n,k,tot,time,i,j,tmp;
int ans,head;
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&time,&k);
        while(k--){
            scanf("%d",&tmp);   //读入人的同时，扔进队列
            a[++tot].tm=time;
            a[tot].ct=tmp;
            if(b[tmp]==0)ans++;   //新的品种,ans++
            b[tmp]++;
        }
        while(time-a[head].tm>=86400){    //二十四小时前的，扔出队列
            tmp=a[head].ct;
            b[tmp]--;
            if(b[tmp]==0)
                ans--;     //品种灭绝，ans--
            head=head+1;
        }
        printf("%d\n",ans);  //ans已经统计好种类数了
    }
    return 0;
}
//祝各位 ++RP
