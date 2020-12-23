
#include "Document.cpp"
#include <string>
#include <string.h>
#include <iostream>
using namespace std;

class Employee
{
public:
	string fullname;
	Document *mydocument;

	Employee(string fullname = "no name")
	{
		this->fullname = fullname;
		this->mydocument = NULL;
	}

	~Employee()
	{
		if (mydocument != NULL)
			mydocument->ClearPoint();
	}

	void SetDoc(Document * doc)
	{
		mydocument = doc->GetPoint();
	}

	void Print()
	{
		cout << "employee: " << fullname << endl;
	}

	void ClearDoc()
	{
		if (mydocument != NULL)
		{
			mydocument->ClearPoint();
			mydocument = NULL;
		}	
	}
};
