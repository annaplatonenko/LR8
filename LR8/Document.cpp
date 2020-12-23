#ifndef GENERAL_INC // чтобы дважды не подключать подключать один файл
#define GENERAL_INC 

#include <string>
#include <string.h>
#include <iostream>
using namespace std;

class Document
{
public:
	string name;
	int count_owner;

	Document(string name = "no name")
	{
		this->name = name;
		this->count_owner = 0;
	}

	~Document()
	{

	}

	Document * GetPoint()
	{
		count_owner += 1;
		return this;
	}

	int ClearPoint()
	{
		if (count_owner > 0)
			--count_owner;
		return count_owner;
	}

	bool IsFinal()
	{
		return count_owner == 0;
	}

	void Print()
	{
		cout << "document: " << name;
		if (IsFinal())
		{
			cout << " document is final " << endl;
		}
		else
		{
			cout << " count_owner: " << count_owner << endl;
		}
	}
};

#endif