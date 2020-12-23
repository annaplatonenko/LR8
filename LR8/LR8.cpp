// Лабораторная работа №8
// Вариант 2
// Использовать smart - указатель для моделирования делопроизводства в учреждении.
// Имеется несколько объектов класса(структуры) «Документ», некоторое количество сотрудников фирмы могут с ним работать.
// Документ считается сформированным, когда с ним уже никто не работает.

#include "Document.cpp"
#include "Employee.cpp"
#include <string>
#include <string.h>

int main()
{
	Document passport("passport");
	Employee Sergey ("Sergey");
	Employee Georgiy ("Georgiy");

	Sergey.SetDoc(&passport);
	Georgiy.SetDoc(&passport);

	passport.Print();
	
	Sergey.ClearDoc();

	passport.Print();

	Georgiy.ClearDoc();
	
	passport.Print();
}