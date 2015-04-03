#ifndef BACK_H
#define BACK_H
#include "struct.h"

template<class T>
class list;

class back
{
private:
	list<strc::account> *accountList;
	
public:
	back();
	~back();

	bool addAccount(strc::account acc);
	int delAccount(char* id);
	strc::Log& findLogs(strc::account acc);
	strc::account& findAccount(char* id, string* name);
	//strc::account& findAccount();
	
};

#endif