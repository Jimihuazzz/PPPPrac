#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
using namespace std; 
long long zc=0;//��¼������
int n;//��¼���ʸ���
string dc[20];//�浥��
int yg[20];//��¼ʣ�����
void jl(string dq,string sg)
{
    int lsg=sg.size();
    for(int i=0;i<n;i++)
    {
        int lc=dc[i].size();
        bool tf=false;
        int jk=0;
        if(sg.size()==1&&dc[i][0]==sg[0])tf=true;
		//����ǵ�һ����ֱ�ӿ���
        if(!tf&&yg[i]!=0)//�ж��Ƿ���Խ����ж�
{//�·�Ϊ�ж����������Ƿ�������ӣ����ó����ӵ�

            for(int j=lsg-1;j>0;j--)
            {
                bool tc=true;
                for(int k=0;k<lc-1&&j+k<lsg;k++)
                {
                    if(sg[j+k]!=dc[i][k])
                    {
                        tc=false;
                        break;
                    }
                }
                if(tc==true)
                {
                    jk=lsg-j;
                    tf=true;
                }
                if(tf==true&&tc==false)break;
            }
}//�ж����

        if(tf==true)
        {
            yg[i]--;
            string ndq=dq;
//            cout<<dc[i]<<endl;
            for(int j=jk;j<lc;j++)
            	ndq+=dc[i][j];//�����µ��ַ�������
            cout<<"ndq=     "<<ndq<<"     "<<endl;
            jl(ndq,dc[i]);//�ݹ�
            yg[i]++;
        }
    }
    
    if(zc<dq.size())
    	zc=dq.size();//̰�ģ� 
//    cout<<dq<<endl;
}
int main()
{
    for(int i=0;i<20;i++)
		yg[i]=2;//�ж��Ƿ���������顣
	//��ʼ����ÿ�����ʿ������Ρ�
    string dr;
    cin>>n;//����
    for(int i=0;i<n;i++)
    	cin>>dc[i];//��¼���еĵ���
    cin>>dr;//����ĸ�����ַ��������Է��뺯���ķ���
    jl("",dr);//��ʼ����
    cout<<zc;//������Ĵ���
    return 0;
}
