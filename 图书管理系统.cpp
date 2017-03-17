#include<iostream>
using namespace std;
class reader;
class book
{
private:
       char name[50];        //书名
       char writer[10];      //作者
       char borrower[10];    //借书人
       int id;               //书号
       int borr_num;          //借书人学号
       int store;               //现存量
       int total;              // 总存量
       int pub_time;               //出版时间
       float price;                  //价格
       char publish[50];          //出版社
public:
       
       book();               //book类构造函数
       int book1();	//书籍管理界面函数
 	   int book_add();	//增加书籍函数
	   int book_del();	//删除书籍函数
       int book_mod();	//修改书籍函数
	   int book_out();	//借书函数
   	   int book_in();	//还书函数
	   int book_name();  	//按书名搜索书籍函数
	   int book_id();	//按书号搜索书籍函数
	   int book_pub();	//按出版社搜索书籍函数
	   int book_time();		//按出版时间搜索书籍函数
	   int book_writer();	//按作者搜索书籍函数
	   int seach_book();	//搜索书籍界面函数
	   int seach();      	//主搜索界面函数

};



class reader
{
private:
       char name[10];               //名字
       int num;                      //学号
       char grade[10];                 //年级
       char clas[10];                  //班级
       char sex[10];                     //性别
       char book_name[50];              //所借书的书名
       char date[10];                   //借书日期
       int avai_days;                   //可借天数
public:
       int read1();	//读者管理界面函数
	   int reader_add();	//增加读者函数
	   int reader_del();	//删除读者函数
	   int reader_mod();  	//修改读者函数
       int reader_name();	        //按读者名字搜索读者函数
	   int reader_num();	          //按读者学号搜索读者函数
	   int seach_reader();	     //搜索读者界面函数
       char *getname();               //获取读者姓名函数
       int getnum();	          //获取读者学号函数
	   char *getgrade();	//获取读者年级函数
	   char *getclas();	    	//获取读者班级函数
	   char *getsex();	//获取读者性别函数
	   char *getbook_name();	//获取所借书书名函数
	   char *getdate();	               //获取借书如期函数
	   int  getavaiday();	//获取可借天数函数
	   int setname(char *); 	//设置读者姓名函数
	   int setnum(int);                //设置读者学号函数
	   int setgrade(char *);             //设置读者年级函数
	   int setclas(char *);              //设置读者班级函数
	   int setsex(char *);	          //设置读者性别函数
	   int setbook_name(char *);	          //设置所借书籍书名函数
	   int setdate(char *);	           //设置借书日期函数
	   int setavaiday(int);	             //设置可借天数函数

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
     cout<<"请按下任何键. ";
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
     cout<<"             * ☆★☆        欢迎来到图书管理系统       ☆★☆ *\n ";
     cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * *\n ";
     return 0;
}

book::book()
{
    system("color 17");
    reader read; 
    menu:
         page_title();
    cout<<"                                   ★主菜单★  "<<endl<<endl<<endl;
    cout<<"                               * * * * * * * * * * * "<< endl;
    cout<<"                               *    1.借    书     * "<< endl<<endl;
    cout<<"                               *    2.还    书     * "<< endl<<endl;
    cout<<"                               *    3.书籍管理     * "<< endl<<endl;
    cout<<"                               *    4.读者管理     * "<< endl<<endl;
    cout<<"                               *    5.搜    索     * "<< endl<<endl;
    cout<<"                               *    0.退    出     * "<< endl;
    cout<<"                               * * * * * * * * * * *"<<endl<<endl;
    cout<<"                      请输入你的选择:" ;
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
                   cout<<" \n错误，请再输入一遍! "<< endl;
                   
    }
    goto menu; 
}



int book::book1()
{
    system("cls");
    page_title();
    cout<<"                                   ☆管理☆" <<endl<< endl<< endl;
    cout<<"                               * * * * * * * * * * *"<< endl;
    cout<<"                               *    1.增加书籍     * "<< endl<< endl;
    cout<<"                               *    2.注销书籍     * "<< endl<< endl;
    cout<<"                               *    3.修改书籍     * "<< endl<< endl;
    cout<<"                               *    0.返    回     *"<<endl;
    cout<<"                               * * * * * * * * * * * "<< endl<< endl;
    cout<<"                     请输入你的选择:" ;
    switch(getch())
	{
	case'1':book_add();break;
    case'2':book_del();break;
    case'3':book_mod();break;
    case'0':return_back();break;
    default:system("cls");
    cout<<"\n错误，请再输入一遍!\n";
    }
    return 0;
}

int book::book_add()              //定义增加书籍的函数
{
     FILE *bfp;
     int i,n;
     page_title();
     cout<<"                              ☆增加书籍☆"<< endl;
     cout<<">>>请输入书的信息<<<"<< endl;
     bfp=fopen("books","rb");
     for(n=0;n<SIZE;n++)
     {
     fread(&books[n],sizeof(books[n]),1,bfp);
     if(books[n].id==0) break;
     }
     fclose(bfp);
     do
     {
     cout<<"请输入一个新的书号（书号从1001开始，但必须不同于已存在的书号）:" ;
     cin>>books[n].id;
     for(i=0;i<SIZE;i++)
     {
                        if(books[n].id==books[i].id&&n!=i)
                        {
                                       cout<<"\n这个书号已经存在. "<< endl;
                                       break;
                        }
     }
    }while(books[n].id==books[i].id);
    cout<<"书名: ";
    cin>>books[n].name;
    cout<<"作者: ";
    cin>>books[n].writer;
    cout<<"价格: ";
    cin>>books[n].price;
    cout<<"总存量: ";
    cin>>books[n].total;
    cout<<"现存量: ";
    cin>>books[n].store;
    cout<<"出版社: ";
    cin>>books[n].publish;
    cout<<"出版时间: ";
    cin>>books[n].pub_time;
    cout<<"借书人: ";
    cin>>books[n].borrower;
    cout<<"借书者学号: ";
    cin>>books[n].borr_num;
    bfp=fopen("books","wb");
    for(n=0;n<SIZE;n++)
    fwrite(&books[n],sizeof(books[n]),1,bfp);
    fclose(bfp);
    cout<<"\n该书已经添加.\n"<< endl;
    return 0;
 }


int book::book_del()            //定义删除书籍的函数
{

     FILE *bfp;
     int i,id,s;
     page_title();
     cout<<"                               ☆注销旧书☆"<< endl;
     if((bfp=fopen("books","rb"))==0)
     {
                                     cout<<"无法打开文件. ";
     }
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     cout<<"\n请输入书号: ";
     cin>>id;
     for(i=0,s=-1;i<SIZE;i++)
     {
     if(books[i].id==id)
                             {
                             cout<<"书名: "<<books[i].name<< endl;
                             cout<<"书号: "<<books[i].id<< endl;
                             cout<<"作者: "<<books[i].writer<< endl;
                             cout<<"价格: "<<books[i].price<< endl;
                             cout<<"总存量: "<<books[i].total<< endl;
                             cout<<"现存量: "<<books[i].store<< endl;
                             cout<<"出版社: "<<books[i].publish<< endl;
                             cout<<"出版时间: "<<books[i]. pub_time<< endl;
                             cout<<"读者: "<<books[i].borrower<< endl;
                             cout<<"读者学号: "<<books[i].borr_num<< endl;
                             cout<<"**********************************************************"<< endl;
                             cout<<"请问是否确定注销此书(1为是,0为否): ";
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
	  cout<<"该书不存在."<< endl;
    }
    if((bfp=fopen("books", "wb"))==0)
    {
         cout<<"无法打开文件. ";
    }
    for(i=0;i<SIZE;i++)
    {
                       fwrite(&books[i],sizeof(books[i]),1,bfp);
    }
    fclose(bfp);
    return 0;
}


int book::book_mod()           //定义修改书籍的函数
{
     FILE *bfp;
     int i,id,s,n;
     page_title();
     cout<<"                               ☆修改书籍☆"<<endl;
     if((bfp=fopen("books","rb"))==0)
     {
     cout<<"无法打开文件. ";
     }
     for(i=0;i<SIZE;i++)
     {
     fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     cout<<endl<<"请输入书号: ";
     cin>>id;
     for(i=0,s==0;i<SIZE;i++)
     {
     if(books[i].id==id)
     {
        cout<<"书名:"<<books[i].name<<endl;
                             cout<<"书号: "<<books[i].id<< endl;
                             cout<<"作者: "<<books[i].writer<< endl;
                             cout<<"价格: "<<books[i].price<< endl;
                             cout<<"总存量: "<<books[i].total<< endl;
                             cout<<"现存量: "<<books[i].store<< endl;
                             cout<<"出版社: "<<books[i].publish<< endl;
                             cout<<"出版时间: "<<books[i]. pub_time<< endl;
                             cout<<"读者: "<<books[i].borrower<< endl;
                             cout<<"读者学号: "<<books[i].borr_num<< endl;

		cout<<"**********************************************************"<< endl;
		cout<<"是否确定修改该书籍(1为是,0为否): ";
		cin>>s;
		if(s==1)
		{ page_title();
		cout<<">>>请重新输入书籍的信息:<<<"<<endl;
		do
		{
			cout<<endl<<"请输入一个新的书号（学号从1001开始，但必须不同于已存在的书号）：";
			cin>>books[i].id;
			for(n=0;n<SIZE;n++)
			{
				if(books[i].id==books[n].id&&n!=i)
				{
					cout<<"该书号已存在. "<<endl;break;
				}
			}
		}while(books[i].id==books[n].id);
  cout<<"书名: ";
    cin>>books[i].name;
    cout<<"作者: ";
    cin>>books[i].writer;
    cout<<"价格: ";
    cin>>books[i].price;
    cout<<"总存量: ";
    cin>>books[i].total;
    cout<<"现存量: ";
    cin>>books[i].store;
    cout<<"出版社: ";
    cin>>books[i].publish;
    cout<<"出版时间: ";
    cin>>books[i].pub_time;
    cout<<"借书人: ";
    cin>>books[i].borrower;
    cout<<"借书者学号: ";
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
             cout<<"该书不存在。"<<endl;
    }
    if((bfp=fopen("books", "wb"))==0)
    {
    cout<<"无法打开文件. ";
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
     cout<<"                                    ☆管理☆\n"<<endl<<endl<<endl;
     cout<<"                               * * * * * * * * * * *"<<endl;
     cout<<"                               *    1.增加读者     *"<<endl<<endl;
     cout<<"                               *    2.注销读者     *"<<endl<<endl;
     cout<<"                               *    3.修改读者     *"<<endl<< endl;
     cout<<"                               *    0.返    回     *"<<endl;
     cout<<"                               * * * * * * * * * * *"<<endl<<endl;
     cout<<"                     请输入你的选择:" ;
	switch(getch())
	{
	case'1':reader_add();break;
    case'2':reader_del();break;
    case'3':reader_mod();break;
    case'0':return_back();break;
    default:system("cls");
    cout<<"\n错误，请再输入一遍!\n";
}
return 0;
}








int reader::reader_add()                   //定义增加读者函数
{
     FILE *sfp;
     int i,n;
     page_title();
     cout<<"                              ☆增加读者☆"<<endl;
     cout<<">>>请输入读者的信息<<< "<<endl;
     sfp=fopen("students","rb");
     for(n=0;n<AMOUNT;n++)
     {
     fread(&stud[n],sizeof(stud[n]),1,sfp);
     if(stud[n].num==0) break;
     }
     fclose(sfp);
     do
     {
     cout<<"请输入一个新的学号（学号从1001开始，但必须不同于已存在的学号）:";
     cin>>stud[n].num;
     for(i=0;i<AMOUNT;i++)
     {
     if(stud[n].num==stud[i].num&&n!=i)
     {
     cout<<endl <<"这个学号已经存在."<<endl;
     break;
     }
     }
    }while(stud[n].num==stud[i].num);
    cout<<"名字: ";
    cin>>stud[n].name;
    cout<<"年级: ";
    cin>>stud[n].grade;
    cout<<"班级: ";
    cin>>stud[n].clas;
    cout<<"性别: ";
    cin>>stud[n].sex;
    cout<<"书名: ";
    cin>>stud[n].book_name;
    cout<<"借书日期: ";
    cin>>stud[n].date;
    cout<<"可借天数: ";
    cin>>stud[n].avai_days;
    sfp=fopen("students","wb");
    for(n=0;n<AMOUNT;n++)
    {
    fwrite(&stud[n],sizeof(stud[n]),1,sfp);
    }
    fclose(sfp);
    cout<<endl<< "该读者已添加." <<endl;
    return 0;
}



int reader::reader_del()        //定义删除读者的函数
{
     FILE *sfp;
     int i,num,s;
     page_title();
     cout<<"                              ☆注销读者☆"<<endl;
     if((sfp=fopen("students", "rb"))==0)
     {
     cout<<"无法打开文件. ";
     }
     for(i=0;i<AMOUNT;i++)
     {
     fread(&stud[i],sizeof(stud[i]),1,sfp);
     }
     fclose(sfp);
     cout<<endl <<"请输入学号: ";
     cin>>num;
     for(i=0,s==-1;i<AMOUNT;i++)
     {
     if(stud[i].num==num)
     {
		cout<<"名字: "<<stud[i].name<<endl;
		cout<<"学号: "<<stud[i].num<<endl;
		cout<<"年级: "<<stud[i].grade<<endl;
		cout<<"班级: "<<stud[i].clas<<endl;
		cout<<"性别: "<<stud[i].sex<<endl;
		cout<<"书名: "<<stud[i].book_name<<endl;
		cout<<"借书日期: "<<stud[i].date<<endl;
		cout<<"可借天数: "<<stud[i].avai_days<<endl;
	cout<<"********************************************************** "<<endl;
		cout<<"是否确定注销该读者(1为是,0为否): ";
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
		cout<<"该读者不存在.";
		}
	}
    }
    if((sfp=fopen("students", "wb"))==0)
    {
    cout<<"无法打开文件. ";
    }
    for(i=0;i<AMOUNT;i++)
    {
    fwrite(&stud[i],sizeof( stud[i]),1,sfp);
    }
    fclose(sfp);
    return 0;
}



int reader::reader_mod()            //定义修改读者的函数
{

	FILE *sfp;
	int i,num,s,n;
	page_title();
	cout<<"                              ☆修改读者☆"<<endl;
	if((sfp=fopen("students", "rb"))==0)
	{
		cout<<"无法打开文件. ";
	}
	for(i=0;i<AMOUNT;i++)
	{
		fread(&stud[i],sizeof(stud[i]),1,sfp);
	}
	fclose(sfp);
	cout<<endl <<"请输入学号: ";
	cin>>num;
	for(i=0,s==-1;i<AMOUNT;i++)
	{
		if(stud[i].num==num)
		{
			cout<<"名字:"<<stud[i].name<<endl;
		cout<<"学号: "<<stud[i].num<<endl;
		cout<<"年级: "<<stud[i].grade<<endl;
		cout<<"班级: "<<stud[i].clas<<endl;
		cout<<"性别: "<<stud[i].sex<<endl;
		cout<<"书名: "<<stud[i].book_name<<endl;
		cout<<"借书日期: "<<stud[i].date<<endl;
		cout<<"可借天数: "<<stud[i].avai_days<<endl;

	cout<<"********************************************************** "<<endl;
			cout<<"是否确定修改该读者(1为是,0为否): ";
			cin>>s;
			if(s==1)
			{
				page_title();
				cout<<">>>请重新输入读者的信息.<<<" <<endl;
				do
				{
					cout<<"请输入一个新的学号（学号从1001开始，但必须不同于已存在的学号）：";
					cin>>stud[i].num;
					for(n=0;n<AMOUNT;n++)
					{
						if(stud[i].num==stud[n].num&&n!=i)
						{
							cout<<"该学号已存在."<<endl;break;
						}
					}
				}while(stud[i].num==stud[n].num);
				cout<<"名字: ";
    cin>>stud[i].name;
    cout<<"年级: ";
    cin>>stud[i].grade;
    cout<<"班级: ";
    cin>>stud[i].clas;
    cout<<"性别: ";
    cin>>stud[i].sex;
    cout<<"书名: ";
    cin>>stud[i].book_name;
    cout<<"借书日期: ";
    cin>>stud[i].date;
    cout<<"可借天数: ";
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
		cout<<"该读者不存在. "<<endl;
	}

	if((sfp=fopen("students", "wb"))==0)
	{
		cout<<"无法打开文件. ";
	}
	for(i=0;i<AMOUNT;i++)
	{
		fwrite(&stud[i],sizeof(stud[i]),1,sfp);
	}
    fclose(sfp);
    return 0;
}


int book::book_out()                      //定义借书函数
{
     FILE *bfp,*sfp;
     int id,i,s,l,num, avaiday;
     char dates[10];
     
     page_title();
     cout<<"                                  ☆借书☆\n";
     cout<<"请输入书号:";
     cin>>id;
     if((bfp=fopen("books", "rb"))==0)
     cout<<"无法打开文件.\n";
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
         cout<<"                                ☆书的信息☆\n";
         cout<<"书名: "<<books[i].name<< endl;
         cout<<"书号: "<<books[i].id<< endl;
         cout<<"作者: "<<books[i].writer<< endl;
         cout<<"价格: "<<books[i].price<< endl;
         cout<<"总存量: "<<books[i].total<< endl;
         cout<<"现存量: "<<books[i].store<< endl;
         cout<<"出版社: "<<books[i].publish<< endl;
         cout<<"出版时间: "<<books[i]. pub_time<< endl;
         cout<<"读者: "<<books[i].borrower<< endl;
         cout<<"读者学号: "<<books[i].borr_num<< endl;

         cout<<"**********************************************************\n";
         if((sfp=fopen("students","rb"))==0)
         {
         cout<<"无法打开文件. ";
         }
         for(l=0;l<AMOUNT;l++)
         {
         fread(&stud[l],sizeof(stud[l]),1,sfp);
         }
         fclose(sfp);
         cout<<"请输入你的学号:\n";
         A: cin>>num;
         for(l=0;l<AMOUNT;l++)
         {
         if(stud[l].getnum()==num)
         {
         if(books[i].store!=0)
         {
         cout<<"请输入可借的天数:\n";
         cin>>avaiday;
         stud[l].setavaiday(avaiday);
         cout<<"请输入借书日期:\n";
         cin>>dates;
         stud[l].setdate(dates); 
         if((bfp=fopen("books", "rb"))==0)
         {
         cout<<"无法打开文件.";
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
         cout<<"你已经借了这本书. ";
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
                  cout<<"对不起，该学号是错误的，请再输入一遍:\n";
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


int book::book_in()                          //定义还书函数
{
     page_title();
     cout<<"                                ☆还书☆\n";
     int i,num,id,n;
     char no[]={"None"};
     FILE *bfp,*sfp;
     if((sfp=fopen("students", "rb"))==0)
     {
     cout<<"无法打开文件. ";
     }
     for(i=0;i<AMOUNT;i++)
     {
     fread(&stud[i],sizeof(stud[i]),1,sfp);
     }
     fclose(sfp);
     cout<<"请输入你的学号:";
     BEFOR: cin>>num;
     for(i=0;i<AMOUNT;i++)
     {
     if(stud[i].getnum()==num&&stud[i].getnum()!=0)
     {
     system("cls");
     page_title();
     cout<<"                                 ☆读者信息☆\n";
     cout<<"名字:"<<stud[i].getname()<<endl;
	 cout<<"学号: "<<stud[i].getnum()<<endl;
	 cout<<"年级: "<<stud[i].getgrade()<<endl;
	 cout<<"班级: "<<stud[i].getclas()<<endl;
	 cout<<"性别: "<<stud[i].getsex()<<endl;
	 cout<<"书名: "<<stud[i].getbook_name()<<endl;
	 cout<<"借书日期: "<<stud[i].getdate()<<endl;
	 cout<<"可借天数: "<<stud[i].getavaiday()<<endl;
cout<<"**************************************************************\n";
     if((bfp=fopen("books", "rb"))==0)
     {
     cout<<"无法打开文件. ";
     }
     for(n=0;n<SIZE;n++)
     {
     fread(&books[n],sizeof(books[n]),1,bfp);
     }
     fclose(bfp);
     cout<<"请输入书号:\n";
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
          cout<<"对不起，这个书号是错误的，请再输入一遍:\n";
          goto AGAIN;
     }
     if((bfp=fopen("books", "wb"))==0)
     {
                            cout<<"无法打开文件. ";
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
                               cout<<"无法打开文件. ";
     }
     for(i=0;i<AMOUNT;i++)
     {
                          fwrite(&stud[i],sizeof(stud[i]),1,sfp);
     }
     fclose(sfp);
     }
     else if(stud[i].getnum()!=num&&stud[i].getnum()!=0)
     {
          cout<<"对不起，这个学号是不存在，请再输入一个正确的学号:\n";
          goto BEFOR;
     }
     }
     return_back();
}






int book::book_name()       //根据书名搜书的函数
{
     FILE *bfp;
     int page_title();
     char a[50];
     int i;
     page_title();
     cout<<"                                  ☆搜书☆\n";
     cout<<"请输入书名:";
     cin>>a;
     if((bfp=fopen("books", "rb"))==0)
     cout<<"无法打开文件.\n";
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     page_title();
     cout<<"                                ☆书的信息☆\n";
     for(i=0;i<SIZE;i++)
     {
     if(strcmp(books[i].name,a)==0)
     {
    
           
           cout<<"书名: "<<books[i].name<< endl;
           cout<<"书号: "<<books[i].id<< endl;
           cout<<"作者: "<<books[i].writer<< endl;
           cout<<"价格: "<<books[i].price<< endl;
           cout<<"总存量: "<<books[i].total<< endl;
           cout<<"现存量: "<<books[i].store<< endl;
           cout<<"出版社: "<<books[i].publish<< endl;
           cout<<"出版时间: "<<books[i]. pub_time<< endl;
           cout<<"读者: "<<books[i].borrower<< endl;
           cout<<"读者学号: "<<books[i].borr_num<< endl;
           cout << endl << endl;
     }
     
     }
     return_back();
}


int book::book_id()          //根据书号搜书函数
{
     FILE *bfp;
     int id, i;
     page_title();
     cout<<"                                  ☆搜书☆\n";
     cout<<"请输入书号:";
     cin>>id;
     if((bfp=fopen("books", "rb"))==0)
     cout<<"无法打开问件.\n";
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     page_title();
     cout<<"                                ☆书的信息☆\n";
     for(i=0;i<SIZE;i++)
     {
     if(books[i].id==id&&books[i].id!=0)
     {

           cout<<"书名: "<<books[i].name<< endl;
           cout<<"书号: "<<books[i].id<< endl;
           cout<<"作者: "<<books[i].writer<< endl;
           cout<<"价格: "<<books[i].price<< endl;
           cout<<"总存量: "<<books[i].total<< endl;
           cout<<"现存量: "<<books[i].store<< endl;
           cout<<"出版社: "<<books[i].publish<< endl;
           cout<<"出版时间: "<<books[i]. pub_time<< endl;
           cout<<"读者: "<<books[i].borrower<< endl;
           cout<<"读者学号: "<<books[i].borr_num<< endl;
           cout << endl << endl;
     }
     }
     return_back();
     return 0;
}


int book::book_pub()                 //根据出版社搜书函数
{
     FILE *bfp;
     int page_title();
     char a[50];
     int i;
     page_title();
     cout<<"请输入书的出版社:";
     cin>>a;
if((bfp=fopen("books", "rb"))==0)
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     page_title();
     cout<<"                                ☆书的信息☆\n";
     for(i=0;i<SIZE;i++)
     {
     if(strcmp(books[i].publish,a)==0)
     {

          cout<<"书名: "<<books[i].name<< endl;
           cout<<"书号: "<<books[i].id<< endl;
           cout<<"作者: "<<books[i].writer<< endl;
           cout<<"价格: "<<books[i].price<< endl;
           cout<<"总存量: "<<books[i].total<< endl;
           cout<<"现存量: "<<books[i].store<< endl;
           cout<<"出版社: "<<books[i].publish<< endl;
           cout<<"出版时间: "<<books[i]. pub_time<< endl;
           cout<<"读者: "<<books[i].borrower<< endl;
           cout<<"读者学号: "<<books[i].borr_num<< endl;
           cout << endl << endl;
     }
     }
     return_back();
     return 0;
}

int book::book_time()      //根据出版时间搜书的函数
{
     FILE *bfp;
    int page_title();
    int time,i;
    page_title();
    cout<<"                                  ☆搜书☆\n";
    cout<<"请输入书的出版时间:";
    cin>>time;
    if((bfp=fopen("books", "rb"))==0)
    cout<<"无法打开文件.\n";
    for(i=0;i<SIZE;i++)
    {
                       fread(&books[i],sizeof(books[i]),1,bfp);
    }
    fclose(bfp);
    page_title();
     cout<<"                                ☆书的信息☆\n";for(i=0;i<SIZE;i++)
    {
    if(books[i].pub_time==time)
    {
        
         cout<<"书名: "<<books[i].name<< endl;
           cout<<"书号: "<<books[i].id<< endl;
           cout<<"作者: "<<books[i].writer<< endl;
           cout<<"价格: "<<books[i].price<< endl;
           cout<<"总存量: "<<books[i].total<< endl;
           cout<<"现存量: "<<books[i].store<< endl;
           cout<<"出版社: "<<books[i].publish<< endl;
           cout<<"出版时间: "<<books[i]. pub_time<< endl;
           cout<<"读者: "<<books[i].borrower<< endl;
           cout<<"读者学号: "<<books[i].borr_num<< endl;
           cout << endl << endl;
    }
    }
    return_back();
    return 0;
}


int book::book_writer()           //根据作者搜书函数
{
     FILE *bfp;
     int page_title();
     char writer[10];
     int i;
     page_title();
     cout<<"                                  ☆搜书☆\n";
     cout<<"请输入书的作者:\n";
     cin>>writer;
     if((bfp=fopen("books","rb"))==0)
     cout<<"无法打开文件.\n";
     for(i=0;i<SIZE;i++)
     {
                        fread(&books[i],sizeof(books[i]),1,bfp);
     }
     fclose(bfp);
     page_title();
     cout<<"                                ☆书的信息☆\n";
     for(i=0;i<SIZE;i++)
     {
     if(strcmp(books[i].writer, writer)==0)
     {
    
          cout<<"书名: "<<books[i].name<< endl;
           cout<<"书号: "<<books[i].id<< endl;
           cout<<"作者: "<<books[i].writer<< endl;
           cout<<"价格: "<<books[i].price<< endl;
           cout<<"总存量: "<<books[i].total<< endl;
           cout<<"现存量: "<<books[i].store<< endl;
           cout<<"出版社: "<<books[i].publish<< endl;
           cout<<"出版时间: "<<books[i]. pub_time<< endl;
           cout<<"读者: "<<books[i].borrower<< endl;
           cout<<"读者学号: "<<books[i].borr_num<< endl;
           cout << endl << endl;
     }
     }
     return_back();
     return 0;
}


int book::seach_book()                //搜书次界面函数
{
     int page_title();
     page_title();
     cout<<"                                  ☆搜书☆\n";
     cout<<"\n>>>请输入查书的方式<<<\n";
     cout<<"\n* 1.根据书名\n";
     cout<<"\n* 2.根据书号\n";
     cout<<"\n* 3.根据出版社\n";
     cout<<"\n* 4.根据出版时间\n";
     cout<<"\n* 5.根据作者\n";
     cout<<"\n* 6.返回\n";
     switch(getch())
     {
     case'1':book_name();break;
     case'2':book_id();break;
     case'3':book_pub();break;
     case'4':book_time();break;
     case'5':book_writer();break;
     case'6':return_back();break;
     default:system("cls");
     cout<<"\n错误，请再输入一遍!\n";
     }
     return 0;
}

int reader::reader_name()             //根据读者名字搜读者函数
{
     FILE *sfp;
     int page_title();
     char a[50];
     int i;
     page_title();
     cout<<"                               ☆搜索读者☆\n";
     cout<<"请输入读者的名字:";
     cin>>a;
     if((sfp=fopen("students","rb"))==0)
     {
                                        cout<<"无法打开文件.\n";
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
           cout<<"                               ☆读者信息☆\n";
           cout<<"名字: "<<stud[i].name<<endl;
		cout<<"学号: "<<stud[i].num<<endl;
		cout<<"年级: "<<stud[i].grade<<endl;
		cout<<"班级: "<<stud[i].clas<<endl;
		cout<<"性别: "<<stud[i].sex<<endl;
		cout<<"书名: "<<stud[i].book_name<<endl;
		cout<<"借书日期: "<<stud[i].date<<endl;
		cout<<"可借天数: "<<stud[i].avai_days<<endl;
}
     }
     return_back();
     return 0;
}

int reader::reader_num()                   //根据读者学号搜读者函数
{
     FILE *sfp;
     int page_title();
     int i,num;
     page_title();
     cout<<"                               ☆搜索读者☆\n";
     cout<<"请输入读者的学号:";
     cin>>num;
     if((sfp=fopen("students", "rb"))==0)
     {
                               cout<<"无法打开文件.\n";
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
         cout<<"                               ☆读者信息☆\n";
         cout<<"名字: "<<stud[i].name<<endl;
		cout<<"学号: "<<stud[i].num<<endl;
		cout<<"年级: "<<stud[i].grade<<endl;
		cout<<"班级: "<<stud[i].clas<<endl;
		cout<<"性别: "<<stud[i].sex<<endl;
		cout<<"书名: "<<stud[i].book_name<<endl;
		cout<<"借书日期: "<<stud[i].date<<endl;
		cout<<"可借天数: "<<stud[i].avai_days<<endl;

     }
     }
     return_back();
     return 0;
}

int reader::seach_reader()                 //搜索读者次界面
{
     int page_title();
     page_title();
     cout<<"                               ☆搜索读者☆\n";
     cout<<">>>请输入搜索的方式<<<\n";
     cout<<"\n* 1.根据读者的姓名.\n";
     cout<<"\n* 2.根据读者的学号.\n";
     cout<<"\n* 0.返回\n";
     switch(getch())
     {
     case'1':reader_name();break;
     case'2':reader_num();break;
     case'0':return_back();break;
     default:system("cls");
     cout<<"\n错误，请再输入一遍!\n";
     }
     return 0;
}

int book::seach()                        //搜索次界面
{
     reader  read;
     int page_title();
     page_title();
     cout<<"                                    ☆搜索☆\n";
     cout<<"\n\n                               * * * * * * * * * * *\n";
     cout<<"                               *    1.搜索书籍     *\n";
     cout<<"\n                               *    2.搜索读者     *\n";
     cout<<"\n                               *    0.返    回     *\n";
     cout<<"                               * * * * * * * * * * *\n";
     cout<<"\n                     请输入你的选择:";
     switch(getch())
     {
                    case'1':seach_book();break;
                    case'2':read.seach_reader();break;
                    case'0':return_back();break;
                    default:system("cls");
                    cout<<"\n错误，请再输入一遍!\n";
     }
     return 0;
}




int main()
{
  book b1;
  return 0;
}
