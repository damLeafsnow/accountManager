#ifndef MAGICLIB_H
#define MAGICLIB_H

#include "Log.h"

#include <string>
using std::string;

template<class T>
class list;

class magicLib
{
private:
	struct account
	{
		char accountID[10];
		string name;
		float balance; //”‡∂Ó
		list<magic::Log> *logs;

		account(string* ID, string* _name, float _balance);
	};

	list<account> *accounts;

public:
	magicLib();
	~magicLib();

	void addAccount();

	bool delAccount(string* ID, string* _name);
};

#endif