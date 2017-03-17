#include<iostream>
using namespace std;
class reader;
class book
{
private:
       char name[50];        //����
       char writer[10];      //����
       char borrower[10];    //������
       int id;               //���
       int borr_num;          //������ѧ��
       int store;               //�ִ���
       int total;              // �ܴ���
       int pub_time;               //����ʱ��
       float price;                  //�۸�
       char publish[50];          //������
public:
       
       book();               //book�๹�캯��
       int book1();	//�鼮������溯��
 	   int book_add();	//�����鼮����
	   int book_del();	//ɾ���鼮����
       int book_mod();	//�޸��鼮����
	   int book_out();	//���麯��
   	   int book_in();	//���麯��
	   int book_name();  	//�����������鼮����
	   int book_id();	//����������鼮����
	   int book_pub();	//�������������鼮����
	   int book_time();		//������ʱ�������鼮����
	   int book_writer();	//�����������鼮����
	   int seach_book();	//�����鼮���溯��
	   int seach();      	//���������溯��

};



class reader
{
private:
       char name[10];               //����
       int num;                      //ѧ��
       char grade[10];                 //�꼶
       char clas[10];                  //�༶
       char sex[10];                     //�Ա�
       char book_name[50];              //�����������
       char date[10];                   //��������
       int avai_days;                   //�ɽ�����
public:
       int read1();	//���߹�����溯��
	   int reader_add();	//���Ӷ��ߺ���
	   int reader_del();	//ɾ�����ߺ���
	   int reader_mod();  	//�޸Ķ��ߺ���
       int reader_name();	        //�����������������ߺ���
	   int reader_num();	          //������ѧ���������ߺ���
	   int seach_reader();	     //�������߽��溯��
       char *getname();               //��ȡ������������
       int getnum();	          //��ȡ����ѧ�ź���
	   char *getgrade();	//��ȡ�����꼶����
	   char *getclas();	    	//��ȡ���߰༶����
	   char *getsex();	//��ȡ�����Ա���
	   char *getbook_name();	//��ȡ��������������
	   char *getdate();	               //��ȡ�������ں���
	   int  getavaiday();	//��ȡ�ɽ���������
	   int setname(char *); 	//���ö�����������
	   int setnum(int);                //���ö���ѧ�ź���
	   int setgrade(char *);             //���ö����꼶����
	   int setclas(char *);              //���ö��߰༶����
	   int setsex(char *);	          //���ö����Ա���
	   int setbook_name(char *);	          //���������鼮��������
	   int setdate(char *);	           //���ý������ں���
	   int setavaiday(int);	             //���ÿɽ���������

};



#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define SIZE 100
#define AMOUNT 50
book books[SIZE];
reader stud[AMOUNT];

int return_back()
{
     cout<<"�밴���κμ�. ";
     getch();
     return 0;
}

char *reader::getname()
{
return name;
}

int reader::getnum()
{
return num;
}

char *reader::getgrade()
{
return grade;
}

char *reader::getclas()
{
return clas;
}

char *reader::getsex()
{
return sex;
}

char *reader::getbook_name()
{
return book_name;
}

char *reader::getdate()
{
return date;
}

int reader::getavaiday()
{
return avai_days;
}


int reader::setname(char *names)
{
strcpy(name,names);
return 0;
}

int reader::setnum(int nums)
{
num=nums;
return 0;
}

int reader::setgrade(char *grades)
{
strcpy(grade,grades);
return 0;
}

int reader::setclas(char *classes)
{
strcpy(clas,classes);
return 0;
}

int reader::setsex(char *sexs)
{
strcpy(sex,sexs);
return 0;
}

int reader::setbook_name(char *book_names)
{
strcpy(book_name,book_names);
return 0;
}

int reader::setdate(char *dates)
{
strcpy(date,dates);
return 0;
}

int reader::setavaiday(int avaiday)
{
avai_days=avaiday;
return 0;
}


int page_title()
{
     system("cls");
     cout<<"              * * * * * * * * * * * * * * * * * * * * * * * * * *\n ";
     cout<<"             * ����        ��ӭ����ͼ�����ϵͳ       ���� *\n ";
     cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * *\n ";
     return 0;
}

book::book()
{
    system("color 17");
    reader read; 
    menu:
         page_title();
    cout<<"                                   �����˵���  "<<endl<<endl<<endl;
    cout<<"                               * * * * * * * * * * * "<< endl;
    cout<<"                               *    1.��    ��     * "<< endl<<endl;
    cout<<"                               *    2.��    ��     * "<< endl<<endl;
    cout<<"                               *    3.�鼮����     * "<< endl<<endl;
    cout<<"                               *    4.���߹���     * "<< endl<<endl;
    cout<<"                               *    5.��    ��     * "<< endl<<endl;
    cout<<"                               *    0.��    ��     * "<< endl;
    cout<<"                               * * * * * * * * * * *"<<endl<<endl;
    cout<<"                      ���������ѡ��:" ;
    switch(getch())
    {
                   case'1':book_out();break;
                   case'2':book_in();break;
                   case'3':book1();break;
                   case'4':read.read1();break;
                   case'5':seach();break;
                   case'0':exit(0);break;
                   default:system("cls");
                   page_title();
                   cout<<" \n������������һ��! "<< endl;
                   
    }
    goto menu; 
}



int book::book1()
{
    system("cls");
    page_title();
    cout<<"                                   ������" <<endl<< endl<< endl;
    cout<<"                               * * * * * * * * * * *"<< endl;
    cout<<"                               *    1.�����鼮     * "<< endl<< endl;
    cout<<"                               *    2.ע���鼮     * "<< endl<< endl;
    cout<<"                               *    3.�޸��鼮     * "<< endl<< endl;
    cout<<"                               *    0.��    ��     *"<<endl;
    cout<<"                               * * * * * * * * * * * "<< endl<< endl;
    cout<<"                     ���������ѡ��:" ;
    switch(getch())
	{
	case'1':book_add();break;
    case'2':book_del();break;
    case'3':book_mod();break;
    case'0':return_back();break;
    default:system("cls");
    cout<<"\n������������һ��!\n";
    }
    return 0;
}

int book::book_add()              //���������鼮�ĺ���
{
     FILE *bfp;
     int i,n;
     page_title();
     cout<<"                              �������鼮��"<< endl;
     cout<<">>>�����������Ϣ<<<"<< endl;
     bfp=fopen("books","rb");
     for(n=0;n<SIZE;n++)
     {
     fread(&books[n],sizeof(books[n]),1,bfp);
     if(books[n].id==0) break;
     }
     fclose(bfp);
     do
     {
     cout<<"������һ���µ���ţ���Ŵ�1001��ʼ�������벻ͬ���Ѵ��ڵ���ţ�:" ;
     cin>>books[n].id;
     for(i=0;i<SIZE;i++)
     {
                        if(books[n].id==books[i].id&&n!=i)
                        {
                                       cout<<"\n�������Ѿ�����. "<< endl;
                                       break;
                        }
     }
    }while(books[n].id==books[i].id);
    cout<<"����: ";
    cin>>books[n].name;
    cout<<"����: ";
    cin>>books[n].writer;
    cout<<"�۸�: ";
    cin>>books[n].price;
    cout<<"�ܴ���: ";
    cin>>books[n].total;
    cout<<"�ִ���: ";
    cin>>books[n].store;
    cout<<"������: ";
    cin>>books[n].publish;
    cout<<"����ʱ��: ";
    cin>>books[n].pub_time;
    cout<<"������: ";
    cin>>books[n].borrower;
    cout<<"������ѧ��: ";
    cin>>books[n].borr_num;
    bfp=fopen("books","wb");
    for(n=0;n<SIZE;n++)
    fwrite(&books[n],sizeof(books[n]),1,bfp);
    fclose(bfp);
    cout<<"\n�����Ѿ����.\n"<< endl;
    return 0;
 }


int book::book_del()            //����ɾ���鼮�ĺ���
{

     FILE *bfp;
     int i,id,s;
     page_title();
     cout<<"                               ��ע�������"<< endl;
     if((bfp=fopen("books","rb"))==0)
     {
                                     cout<<"�޷����ļ�. ";
     }
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     cout<<"\n���������: ";
     cin>>id;
     for(i=0,s=-1;i<SIZE;i++)
     {
     if(books[i].id==id)
                             {
                             cout<<"����: "<<books[i].name<< endl;
                             cout<<"���: "<<books[i].id<< endl;
                             cout<<"����: "<<books[i].writer<< endl;
                             cout<<"�۸�: "<<books[i].price<< endl;
                             cout<<"�ܴ���: "<<books[i].total<< endl;
                             cout<<"�ִ���: "<<books[i].store<< endl;
                             cout<<"������: "<<books[i].publish<< endl;
                             cout<<"����ʱ��: "<<books[i]. pub_time<< endl;
                             cout<<"����: "<<books[i].borrower<< endl;
                             cout<<"����ѧ��: "<<books[i].borr_num<< endl;
                             cout<<"**********************************************************"<< endl;
                             cout<<"�����Ƿ�ȷ��ע������(1Ϊ��,0Ϊ��): ";
                             cin>>s;
                             if(s==1)
                             {
                                     for(;i<SIZE;i++)
                                     books[i]=books[i+1];
                             }
                             else if(s==0)
                             {

                                  return 0;
                             }
                             }
     }
     if(s==-1)
     {
	  cout<<"���鲻����."<< endl;
    }
    if((bfp=fopen("books", "wb"))==0)
    {
         cout<<"�޷����ļ�. ";
    }
    for(i=0;i<SIZE;i++)
    {
                       fwrite(&books[i],sizeof(books[i]),1,bfp);
    }
    fclose(bfp);
    return 0;
}


int book::book_mod()           //�����޸��鼮�ĺ���
{
     FILE *bfp;
     int i,id,s,n;
     page_title();
     cout<<"                               ���޸��鼮��"<<endl;
     if((bfp=fopen("books","rb"))==0)
     {
     cout<<"�޷����ļ�. ";
     }
     for(i=0;i<SIZE;i++)
     {
     fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     cout<<endl<<"���������: ";
     cin>>id;
     for(i=0,s==0;i<SIZE;i++)
     {
     if(books[i].id==id)
     {
        cout<<"����:"<<books[i].name<<endl;
                             cout<<"���: "<<books[i].id<< endl;
                             cout<<"����: "<<books[i].writer<< endl;
                             cout<<"�۸�: "<<books[i].price<< endl;
                             cout<<"�ܴ���: "<<books[i].total<< endl;
                             cout<<"�ִ���: "<<books[i].store<< endl;
                             cout<<"������: "<<books[i].publish<< endl;
                             cout<<"����ʱ��: "<<books[i]. pub_time<< endl;
                             cout<<"����: "<<books[i].borrower<< endl;
                             cout<<"����ѧ��: "<<books[i].borr_num<< endl;

		cout<<"**********************************************************"<< endl;
		cout<<"�Ƿ�ȷ���޸ĸ��鼮(1Ϊ��,0Ϊ��): ";
		cin>>s;
		if(s==1)
		{ page_title();
		cout<<">>>�����������鼮����Ϣ:<<<"<<endl;
		do
		{
			cout<<endl<<"������һ���µ���ţ�ѧ�Ŵ�1001��ʼ�������벻ͬ���Ѵ��ڵ���ţ���";
			cin>>books[i].id;
			for(n=0;n<SIZE;n++)
			{
				if(books[i].id==books[n].id&&n!=i)
				{
					cout<<"������Ѵ���. "<<endl;break;
				}
			}
		}while(books[i].id==books[n].id);
  cout<<"����: ";
    cin>>books[i].name;
    cout<<"����: ";
    cin>>books[i].writer;
    cout<<"�۸�: ";
    cin>>books[i].price;
    cout<<"�ܴ���: ";
    cin>>books[i].total;
    cout<<"�ִ���: ";
    cin>>books[i].store;
    cout<<"������: ";
    cin>>books[i].publish;
    cout<<"����ʱ��: ";
    cin>>books[i].pub_time;
    cout<<"������: ";
    cin>>books[i].borrower;
    cout<<"������ѧ��: ";
    cin>>books[i].borr_num;

 }
   else if(s==0)
   {

	return 0;
    }
    }
    }
    if(s==-1)
    {
             cout<<"���鲻���ڡ�"<<endl;
    }
    if((bfp=fopen("books", "wb"))==0)
    {
    cout<<"�޷����ļ�. ";
    }
    for(i=0;i<SIZE;i++)
    {
    fwrite(&books[i],sizeof(books[i]),1,bfp);
    }
    fclose(bfp);
    return 0;
}


int reader::read1()
{

	system("cls");
    page_title();
     cout<<"                                    ������\n"<<endl<<endl<<endl;
     cout<<"                               * * * * * * * * * * *"<<endl;
     cout<<"                               *    1.���Ӷ���     *"<<endl<<endl;
     cout<<"                               *    2.ע������     *"<<endl<<endl;
     cout<<"                               *    3.�޸Ķ���     *"<<endl<< endl;
     cout<<"                               *    0.��    ��     *"<<endl;
     cout<<"                               * * * * * * * * * * *"<<endl<<endl;
     cout<<"                     ���������ѡ��:" ;
	switch(getch())
	{
	case'1':reader_add();break;
    case'2':reader_del();break;
    case'3':reader_mod();break;
    case'0':return_back();break;
    default:system("cls");
    cout<<"\n������������һ��!\n";
}
return 0;
}








int reader::reader_add()                   //�������Ӷ��ߺ���
{
     FILE *sfp;
     int i,n;
     page_title();
     cout<<"                              �����Ӷ��ߡ�"<<endl;
     cout<<">>>��������ߵ���Ϣ<<< "<<endl;
     sfp=fopen("students","rb");
     for(n=0;n<AMOUNT;n++)
     {
     fread(&stud[n],sizeof(stud[n]),1,sfp);
     if(stud[n].num==0) break;
     }
     fclose(sfp);
     do
     {
     cout<<"������һ���µ�ѧ�ţ�ѧ�Ŵ�1001��ʼ�������벻ͬ���Ѵ��ڵ�ѧ�ţ�:";
     cin>>stud[n].num;
     for(i=0;i<AMOUNT;i++)
     {
     if(stud[n].num==stud[i].num&&n!=i)
     {
     cout<<endl <<"���ѧ���Ѿ�����."<<endl;
     break;
     }
     }
    }while(stud[n].num==stud[i].num);
    cout<<"����: ";
    cin>>stud[n].name;
    cout<<"�꼶: ";
    cin>>stud[n].grade;
    cout<<"�༶: ";
    cin>>stud[n].clas;
    cout<<"�Ա�: ";
    cin>>stud[n].sex;
    cout<<"����: ";
    cin>>stud[n].book_name;
    cout<<"��������: ";
    cin>>stud[n].date;
    cout<<"�ɽ�����: ";
    cin>>stud[n].avai_days;
    sfp=fopen("students","wb");
    for(n=0;n<AMOUNT;n++)
    {
    fwrite(&stud[n],sizeof(stud[n]),1,sfp);
    }
    fclose(sfp);
    cout<<endl<< "�ö��������." <<endl;
    return 0;
}



int reader::reader_del()        //����ɾ�����ߵĺ���
{
     FILE *sfp;
     int i,num,s;
     page_title();
     cout<<"                              ��ע�����ߡ�"<<endl;
     if((sfp=fopen("students", "rb"))==0)
     {
     cout<<"�޷����ļ�. ";
     }
     for(i=0;i<AMOUNT;i++)
     {
     fread(&stud[i],sizeof(stud[i]),1,sfp);
     }
     fclose(sfp);
     cout<<endl <<"������ѧ��: ";
     cin>>num;
     for(i=0,s==-1;i<AMOUNT;i++)
     {
     if(stud[i].num==num)
     {
		cout<<"����: "<<stud[i].name<<endl;
		cout<<"ѧ��: "<<stud[i].num<<endl;
		cout<<"�꼶: "<<stud[i].grade<<endl;
		cout<<"�༶: "<<stud[i].clas<<endl;
		cout<<"�Ա�: "<<stud[i].sex<<endl;
		cout<<"����: "<<stud[i].book_name<<endl;
		cout<<"��������: "<<stud[i].date<<endl;
		cout<<"�ɽ�����: "<<stud[i].avai_days<<endl;
	cout<<"********************************************************** "<<endl;
		cout<<"�Ƿ�ȷ��ע���ö���(1Ϊ��,0Ϊ��): ";
		cin>>s;
		if(s==1)
		{
			for(;i<AMOUNT;i++)
				stud[i]=stud[i+1];
		}
		else if(s==0)
		{

			return 0;
		}
		if(s==-1)
		{
		cout<<"�ö��߲�����.";
		}
	}
    }
    if((sfp=fopen("students", "wb"))==0)
    {
    cout<<"�޷����ļ�. ";
    }
    for(i=0;i<AMOUNT;i++)
    {
    fwrite(&stud[i],sizeof( stud[i]),1,sfp);
    }
    fclose(sfp);
    return 0;
}



int reader::reader_mod()            //�����޸Ķ��ߵĺ���
{

	FILE *sfp;
	int i,num,s,n;
	page_title();
	cout<<"                              ���޸Ķ��ߡ�"<<endl;
	if((sfp=fopen("students", "rb"))==0)
	{
		cout<<"�޷����ļ�. ";
	}
	for(i=0;i<AMOUNT;i++)
	{
		fread(&stud[i],sizeof(stud[i]),1,sfp);
	}
	fclose(sfp);
	cout<<endl <<"������ѧ��: ";
	cin>>num;
	for(i=0,s==-1;i<AMOUNT;i++)
	{
		if(stud[i].num==num)
		{
			cout<<"����:"<<stud[i].name<<endl;
		cout<<"ѧ��: "<<stud[i].num<<endl;
		cout<<"�꼶: "<<stud[i].grade<<endl;
		cout<<"�༶: "<<stud[i].clas<<endl;
		cout<<"�Ա�: "<<stud[i].sex<<endl;
		cout<<"����: "<<stud[i].book_name<<endl;
		cout<<"��������: "<<stud[i].date<<endl;
		cout<<"�ɽ�����: "<<stud[i].avai_days<<endl;

	cout<<"********************************************************** "<<endl;
			cout<<"�Ƿ�ȷ���޸ĸö���(1Ϊ��,0Ϊ��): ";
			cin>>s;
			if(s==1)
			{
				page_title();
				cout<<">>>������������ߵ���Ϣ.<<<" <<endl;
				do
				{
					cout<<"������һ���µ�ѧ�ţ�ѧ�Ŵ�1001��ʼ�������벻ͬ���Ѵ��ڵ�ѧ�ţ���";
					cin>>stud[i].num;
					for(n=0;n<AMOUNT;n++)
					{
						if(stud[i].num==stud[n].num&&n!=i)
						{
							cout<<"��ѧ���Ѵ���."<<endl;break;
						}
					}
				}while(stud[i].num==stud[n].num);
				cout<<"����: ";
    cin>>stud[i].name;
    cout<<"�꼶: ";
    cin>>stud[i].grade;
    cout<<"�༶: ";
    cin>>stud[i].clas;
    cout<<"�Ա�: ";
    cin>>stud[i].sex;
    cout<<"����: ";
    cin>>stud[i].book_name;
    cout<<"��������: ";
    cin>>stud[i].date;
    cout<<"�ɽ�����: ";
    cin>>stud[i].avai_days;

			}
			else if(s==0)
			{

				return 0;
			}
		}

	}
	if(s==-1)
	{
		cout<<"�ö��߲�����. "<<endl;
	}

	if((sfp=fopen("students", "wb"))==0)
	{
		cout<<"�޷����ļ�. ";
	}
	for(i=0;i<AMOUNT;i++)
	{
		fwrite(&stud[i],sizeof(stud[i]),1,sfp);
	}
    fclose(sfp);
    return 0;
}


int book::book_out()                      //������麯��
{
     FILE *bfp,*sfp;
     int id,i,s,l,num, avaiday;
     char dates[10];
     
     page_title();
     cout<<"                                  ������\n";
     cout<<"���������:";
     cin>>id;
     if((bfp=fopen("books", "rb"))==0)
     cout<<"�޷����ļ�.\n";
     for(i=0;i<SIZE;i++)
     {
     fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     for(i=0;i<SIZE;i++)
     {
     if(id==books[i].id&&books[i].id!=0)
     {
         system("cls");
         page_title();
         cout<<"                                �������Ϣ��\n";
         cout<<"����: "<<books[i].name<< endl;
         cout<<"���: "<<books[i].id<< endl;
         cout<<"����: "<<books[i].writer<< endl;
         cout<<"�۸�: "<<books[i].price<< endl;
         cout<<"�ܴ���: "<<books[i].total<< endl;
         cout<<"�ִ���: "<<books[i].store<< endl;
         cout<<"������: "<<books[i].publish<< endl;
         cout<<"����ʱ��: "<<books[i]. pub_time<< endl;
         cout<<"����: "<<books[i].borrower<< endl;
         cout<<"����ѧ��: "<<books[i].borr_num<< endl;

         cout<<"**********************************************************\n";
         if((sfp=fopen("students","rb"))==0)
         {
         cout<<"�޷����ļ�. ";
         }
         for(l=0;l<AMOUNT;l++)
         {
         fread(&stud[l],sizeof(stud[l]),1,sfp);
         }
         fclose(sfp);
         cout<<"���������ѧ��:\n";
         A: cin>>num;
         for(l=0;l<AMOUNT;l++)
         {
         if(stud[l].getnum()==num)
         {
         if(books[i].store!=0)
         {
         cout<<"������ɽ������:\n";
         cin>>avaiday;
         stud[l].setavaiday(avaiday);
         cout<<"�������������:\n";
         cin>>dates;
         stud[l].setdate(dates); 
         if((bfp=fopen("books", "rb"))==0)
         {
         cout<<"�޷����ļ�.";
         }
         for(s=0;s<SIZE;s++)
         {
         fread(&books[s],sizeof(books[s]),1,bfp);fclose(bfp);
         if(books[s].id==books[i].id)
         {
         books[s].store--;
         books[s].borr_num=stud[l].getnum();
         strcpy(books[s].borrower,stud[l].getname());
         strcpy(stud[l].getbook_name(),books[s].name);
         cout<<"���Ѿ������Ȿ��. ";
         sfp=fopen("students","wb");
            for(l=0;l<AMOUNT;l++)
             {
             fwrite(&stud[l],sizeof(stud[l]),1,sfp);
             }
             fclose(sfp);
             }
             }
             }
             }
             else if(stud[l].getnum()!= num)
             {
                  cout<<"�Բ��𣬸�ѧ���Ǵ���ģ���������һ��:\n";
                  goto A;
             }
             }
             bfp=fopen("books", "wb");
             for(s=0;s<SIZE;s++)
             {
             fwrite(&books[s],sizeof(books),1,bfp);
             }
            fclose(bfp);
            }
            }
}


int book::book_in()                          //���廹�麯��
{
     page_title();
     cout<<"                                ����\n";
     int i,num,id,n;
     char no[]={"None"};
     FILE *bfp,*sfp;
     if((sfp=fopen("students", "rb"))==0)
     {
     cout<<"�޷����ļ�. ";
     }
     for(i=0;i<AMOUNT;i++)
     {
     fread(&stud[i],sizeof(stud[i]),1,sfp);
     }
     fclose(sfp);
     cout<<"���������ѧ��:";
     BEFOR: cin>>num;
     for(i=0;i<AMOUNT;i++)
     {
     if(stud[i].getnum()==num&&stud[i].getnum()!=0)
     {
     system("cls");
     page_title();
     cout<<"                                 �������Ϣ��\n";
     cout<<"����:"<<stud[i].getname()<<endl;
	 cout<<"ѧ��: "<<stud[i].getnum()<<endl;
	 cout<<"�꼶: "<<stud[i].getgrade()<<endl;
	 cout<<"�༶: "<<stud[i].getclas()<<endl;
	 cout<<"�Ա�: "<<stud[i].getsex()<<endl;
	 cout<<"����: "<<stud[i].getbook_name()<<endl;
	 cout<<"��������: "<<stud[i].getdate()<<endl;
	 cout<<"�ɽ�����: "<<stud[i].getavaiday()<<endl;
cout<<"**************************************************************\n";
     if((bfp=fopen("books", "rb"))==0)
     {
     cout<<"�޷����ļ�. ";
     }
     for(n=0;n<SIZE;n++)
     {
     fread(&books[n],sizeof(books[n]),1,bfp);
     }
     fclose(bfp);
     cout<<"���������:\n";
     AGAIN: cin>>id;
     for(n=0;n<SIZE;n++)
     {
     if(books[n].id==id&&books[n].id!=0)
     {
     books[n].borr_num=0;
     strcpy(books[n].borrower,no);
     books[n].store++;
     }
     else if(books[n].id!=id)
     {
          cout<<"�Բ����������Ǵ���ģ���������һ��:\n";
          goto AGAIN;
     }
     if((bfp=fopen("books", "wb"))==0)
     {
                            cout<<"�޷����ļ�. ";
     }
     for(n=0;n<SIZE;n++)
     {
                        fwrite(&books[n],sizeof(books[n]),1,bfp);
     }
     fclose(bfp);
     }
     stud[i].setavaiday(0);
     stud[i].setbook_name(no);
     stud[i].setdate(no);
     if((sfp=fopen("students", "wb"))==0)
     {
                               cout<<"�޷����ļ�. ";
     }
     for(i=0;i<AMOUNT;i++)
     {
                          fwrite(&stud[i],sizeof(stud[i]),1,sfp);
     }
     fclose(sfp);
     }
     else if(stud[i].getnum()!=num&&stud[i].getnum()!=0)
     {
          cout<<"�Բ������ѧ���ǲ����ڣ���������һ����ȷ��ѧ��:\n";
          goto BEFOR;
     }
     }
     return_back();
}






int book::book_name()       //������������ĺ���
{
     FILE *bfp;
     int page_title();
     char a[50];
     int i;
     page_title();
     cout<<"                                  �������\n";
     cout<<"����������:";
     cin>>a;
     if((bfp=fopen("books", "rb"))==0)
     cout<<"�޷����ļ�.\n";
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     page_title();
     cout<<"                                �������Ϣ��\n";
     for(i=0;i<SIZE;i++)
     {
     if(strcmp(books[i].name,a)==0)
     {
    
           
           cout<<"����: "<<books[i].name<< endl;
           cout<<"���: "<<books[i].id<< endl;
           cout<<"����: "<<books[i].writer<< endl;
           cout<<"�۸�: "<<books[i].price<< endl;
           cout<<"�ܴ���: "<<books[i].total<< endl;
           cout<<"�ִ���: "<<books[i].store<< endl;
           cout<<"������: "<<books[i].publish<< endl;
           cout<<"����ʱ��: "<<books[i]. pub_time<< endl;
           cout<<"����: "<<books[i].borrower<< endl;
           cout<<"����ѧ��: "<<books[i].borr_num<< endl;
           cout << endl << endl;
     }
     
     }
     return_back();
}


int book::book_id()          //����������麯��
{
     FILE *bfp;
     int id, i;
     page_title();
     cout<<"                                  �������\n";
     cout<<"���������:";
     cin>>id;
     if((bfp=fopen("books", "rb"))==0)
     cout<<"�޷����ʼ�.\n";
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     page_title();
     cout<<"                                �������Ϣ��\n";
     for(i=0;i<SIZE;i++)
     {
     if(books[i].id==id&&books[i].id!=0)
     {

           cout<<"����: "<<books[i].name<< endl;
           cout<<"���: "<<books[i].id<< endl;
           cout<<"����: "<<books[i].writer<< endl;
           cout<<"�۸�: "<<books[i].price<< endl;
           cout<<"�ܴ���: "<<books[i].total<< endl;
           cout<<"�ִ���: "<<books[i].store<< endl;
           cout<<"������: "<<books[i].publish<< endl;
           cout<<"����ʱ��: "<<books[i]. pub_time<< endl;
           cout<<"����: "<<books[i].borrower<< endl;
           cout<<"����ѧ��: "<<books[i].borr_num<< endl;
           cout << endl << endl;
     }
     }
     return_back();
     return 0;
}


int book::book_pub()                 //���ݳ��������麯��
{
     FILE *bfp;
     int page_title();
     char a[50];
     int i;
     page_title();
     cout<<"��������ĳ�����:";
     cin>>a;
if((bfp=fopen("books", "rb"))==0)
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     page_title();
     cout<<"                                �������Ϣ��\n";
     for(i=0;i<SIZE;i++)
     {
     if(strcmp(books[i].publish,a)==0)
     {

          cout<<"����: "<<books[i].name<< endl;
           cout<<"���: "<<books[i].id<< endl;
           cout<<"����: "<<books[i].writer<< endl;
           cout<<"�۸�: "<<books[i].price<< endl;
           cout<<"�ܴ���: "<<books[i].total<< endl;
           cout<<"�ִ���: "<<books[i].store<< endl;
           cout<<"������: "<<books[i].publish<< endl;
           cout<<"����ʱ��: "<<books[i]. pub_time<< endl;
           cout<<"����: "<<books[i].borrower<< endl;
           cout<<"����ѧ��: "<<books[i].borr_num<< endl;
           cout << endl << endl;
     }
     }
     return_back();
     return 0;
}

int book::book_time()      //���ݳ���ʱ������ĺ���
{
     FILE *bfp;
    int page_title();
    int time,i;
    page_title();
    cout<<"                                  �������\n";
    cout<<"��������ĳ���ʱ��:";
    cin>>time;
    if((bfp=fopen("books", "rb"))==0)
    cout<<"�޷����ļ�.\n";
    for(i=0;i<SIZE;i++)
    {
                       fread(&books[i],sizeof(books[i]),1,bfp);
    }
    fclose(bfp);
    page_title();
     cout<<"                                �������Ϣ��\n";for(i=0;i<SIZE;i++)
    {
    if(books[i].pub_time==time)
    {
        
         cout<<"����: "<<books[i].name<< endl;
           cout<<"���: "<<books[i].id<< endl;
           cout<<"����: "<<books[i].writer<< endl;
           cout<<"�۸�: "<<books[i].price<< endl;
           cout<<"�ܴ���: "<<books[i].total<< endl;
           cout<<"�ִ���: "<<books[i].store<< endl;
           cout<<"������: "<<books[i].publish<< endl;
           cout<<"����ʱ��: "<<books[i]. pub_time<< endl;
           cout<<"����: "<<books[i].borrower<< endl;
           cout<<"����ѧ��: "<<books[i].borr_num<< endl;
           cout << endl << endl;
    }
    }
    return_back();
    return 0;
}


int book::book_writer()           //�����������麯��
{
     FILE *bfp;
     int page_title();
     char writer[10];
     int i;
     page_title();
     cout<<"                                  �������\n";
     cout<<"�������������:\n";
     cin>>writer;
     if((bfp=fopen("books","rb"))==0)
     cout<<"�޷����ļ�.\n";
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     page_title();
     cout<<"                                �������Ϣ��\n";
     for(i=0;i<SIZE;i++)
     {
     if(strcmp(books[i].writer, writer)==0)
     {
    
          cout<<"����: "<<books[i].name<< endl;
           cout<<"���: "<<books[i].id<< endl;
           cout<<"����: "<<books[i].writer<< endl;
           cout<<"�۸�: "<<books[i].price<< endl;
           cout<<"�ܴ���: "<<books[i].total<< endl;
           cout<<"�ִ���: "<<books[i].store<< endl;
           cout<<"������: "<<books[i].publish<< endl;
           cout<<"����ʱ��: "<<books[i]. pub_time<< endl;
           cout<<"����: "<<books[i].borrower<< endl;
           cout<<"����ѧ��: "<<books[i].borr_num<< endl;
           cout << endl << endl;
     }
     }
     return_back();
     return 0;
}


int book::seach_book()                //����ν��溯��
{
     int page_title();
     page_title();
     cout<<"                                  �������\n";
     cout<<"\n>>>���������ķ�ʽ<<<\n";
     cout<<"\n* 1.��������\n";
     cout<<"\n* 2.�������\n";
     cout<<"\n* 3.���ݳ�����\n";
     cout<<"\n* 4.���ݳ���ʱ��\n";
     cout<<"\n* 5.��������\n";
     cout<<"\n* 6.����\n";
     switch(getch())
     {
     case'1':book_name();break;
     case'2':book_id();break;
     case'3':book_pub();break;
     case'4':book_time();break;
     case'5':book_writer();break;
     case'6':return_back();break;
     default:system("cls");
     cout<<"\n������������һ��!\n";
     }
     return 0;
}

int reader::reader_name()             //���ݶ��������Ѷ��ߺ���
{
     FILE *sfp;
     int page_title();
     char a[50];
     int i;
     page_title();
     cout<<"                               ���������ߡ�\n";
     cout<<"��������ߵ�����:";
     cin>>a;
     if((sfp=fopen("students","rb"))==0)
     {
                                        cout<<"�޷����ļ�.\n";
     }
     for(i=0;i<AMOUNT;i++)
     {
                          fread(&stud[i],sizeof(stud[i]),1,sfp);
     }
     fclose(sfp);
     for(i=0;i<AMOUNT;i++)
     {
     if(strcmp(stud[i].name,a)==0)
     {
           system("cls");
           page_title();
           cout<<"                               �������Ϣ��\n";
           cout<<"����: "<<stud[i].name<<endl;
		cout<<"ѧ��: "<<stud[i].num<<endl;
		cout<<"�꼶: "<<stud[i].grade<<endl;
		cout<<"�༶: "<<stud[i].clas<<endl;
		cout<<"�Ա�: "<<stud[i].sex<<endl;
		cout<<"����: "<<stud[i].book_name<<endl;
		cout<<"��������: "<<stud[i].date<<endl;
		cout<<"�ɽ�����: "<<stud[i].avai_days<<endl;
}
     }
     return_back();
     return 0;
}

int reader::reader_num()                   //���ݶ���ѧ���Ѷ��ߺ���
{
     FILE *sfp;
     int page_title();
     int i,num;
     page_title();
     cout<<"                               ���������ߡ�\n";
     cout<<"��������ߵ�ѧ��:";
     cin>>num;
     if((sfp=fopen("students", "rb"))==0)
     {
                               cout<<"�޷����ļ�.\n";
     }
     for(i=0;i<AMOUNT;i++)
     {
                          fread(&stud[i],sizeof(stud[i]),1,sfp);
     }
     fclose(sfp);
     for(i=0;i<AMOUNT;i++)
     {
     if(stud[i].num==num &&stud[i].num!=0)
     {
         system("cls");
         page_title();
         cout<<"                               �������Ϣ��\n";
         cout<<"����: "<<stud[i].name<<endl;
		cout<<"ѧ��: "<<stud[i].num<<endl;
		cout<<"�꼶: "<<stud[i].grade<<endl;
		cout<<"�༶: "<<stud[i].clas<<endl;
		cout<<"�Ա�: "<<stud[i].sex<<endl;
		cout<<"����: "<<stud[i].book_name<<endl;
		cout<<"��������: "<<stud[i].date<<endl;
		cout<<"�ɽ�����: "<<stud[i].avai_days<<endl;

     }
     }
     return_back();
     return 0;
}

int reader::seach_reader()                 //�������ߴν���
{
     int page_title();
     page_title();
     cout<<"                               ���������ߡ�\n";
     cout<<">>>�����������ķ�ʽ<<<\n";
     cout<<"\n* 1.���ݶ��ߵ�����.\n";
     cout<<"\n* 2.���ݶ��ߵ�ѧ��.\n";
     cout<<"\n* 0.����\n";
     switch(getch())
     {
     case'1':reader_name();break;
     case'2':reader_num();break;
     case'0':return_back();break;
     default:system("cls");
     cout<<"\n������������һ��!\n";
     }
     return 0;
}

int book::seach()                        //�����ν���
{
     reader  read;
     int page_title();
     page_title();
     cout<<"                                    ��������\n";
     cout<<"\n\n                               * * * * * * * * * * *\n";
     cout<<"                               *    1.�����鼮     *\n";
     cout<<"\n                               *    2.��������     *\n";
     cout<<"\n                               *    0.��    ��     *\n";
     cout<<"                               * * * * * * * * * * *\n";
     cout<<"\n                     ���������ѡ��:";
     switch(getch())
     {
                    case'1':seach_book();break;
                    case'2':read.seach_reader();break;
                    case'0':return_back();break;
                    default:system("cls");
                    cout<<"\n������������һ��!\n";
     }
     return 0;
}




int main()
{
  book b1;
  return 0;
}
