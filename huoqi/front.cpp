#include "front.h"
#include <iostream>
using namespace std;

void front::mainWindow()
{	
	cout<<" *****************************************************************\n"<<endl;
	cout<<"         欢迎使用mr pang1.0 银行活期账户管理系统\n"<<endl;
	cout<<" *****************************************************************\n"<<endl;
	cout<<"   1.开户                   2.销户\n"<<endl;
	cout<<"   3.取款                   4.存款\n"<<endl;
	cout<<"   5.显示余额               6.返回上一层\n"<<endl;
	cout<<"   7.exit\n"<<endl;
	//建一个用户空间
	char nam[20];
	int pas[6];
	int i,a;
	cout<<"input your account name\n"<<endl;
	gets(num);
	cout<<"input your account password\n"<<endl;
	for(i=0;i<6;i++)  {    cin >> pas[i];  } ;
	//验证，若错误，cout<<"your message is an error\n"<<endl;若成功进入下一页面
	cin>>a;
	switch(a)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7: 	cout<<" 谢谢使用\n"<<endl;  exit(0);
		}

}
