#include "front.h"
#include <iostream>
using namespace std;

void front::mainWindow()
{	
	cout<<" *****************************************************************\n"<<endl;
	cout<<"         ��ӭʹ��mr pang1.0 ���л����˻�����ϵͳ\n"<<endl;
	cout<<" *****************************************************************\n"<<endl;
	cout<<"   1.����                   2.����\n"<<endl;
	cout<<"   3.ȡ��                   4.���\n"<<endl;
	cout<<"   5.��ʾ���               6.������һ��\n"<<endl;
	cout<<"   7.exit\n"<<endl;
	//��һ���û��ռ�
	char nam[20];
	int pas[6];
	int i,a;
	cout<<"input your account name\n"<<endl;
	gets(num);
	cout<<"input your account password\n"<<endl;
	for(i=0;i<6;i++)  {    cin >> pas[i];  } ;
	//��֤��������cout<<"your message is an error\n"<<endl;���ɹ�������һҳ��
	cin>>a;
	switch(a)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7: 	cout<<" ллʹ��\n"<<endl;  exit(0);
		}

}
