#include<cstdio>
using namespace std;
int mov[4][2]={{0,1},{0,-1},{1,0},{-1,0}},x,y,m,n;
char wh[21][21];
void search(int a,int b);
int main(){
	while(scanf("%d%d",&n,&m),n&&m){
	for (int i=0;i<m;i++)
		scanf("%s",wh[i]);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			if(wh[i][j]=='@'){x=i;y=j;}
				}
	search(x,y);
	int sum=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(wh[i][j]=='O')sum++;
	printf("%d\n",sum);
}
return 0;
}
void search(int a,int b){
	wh[a][b]='O';
	for(int i=0;i<4;i++){
		x+=mov[i][0];
		y+=mov[i][1];
		if(wh[x][y]=='.'&&x>-1&&y>-1&&x<m&&y<n)search(x,y);
		x-=mov[i][0];
		y-=mov[i][1];
	}
}
