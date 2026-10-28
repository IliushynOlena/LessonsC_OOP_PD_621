#include "Book.h"
#include "Book.h"
#include "Library.h"

class MyClass
{
	//default constructor
	//copy constructor
	//destructor
	//operator =
};

Library TestLibrary(Library& lib)
{
	Library temp;
	return lib;
}

int main()
{
	Book book("Smile",1960,"Rey Bredbery",250,Genre::Fantasy);
	book.ShowInfo();

	Library lib("Youngth Library", "Kyivska 16");
	lib.AddBook(Book("12 стільців", 1928, "І. Ільф, Є. Петров", 400, Comedy));
	lib.AddBook(Book("Пригоди Тома Соєра", 1876, "Марк Твен", 275, Comedy));
	lib.AddBook(Book("Тіні забутих предків", 1911, "Михайло Коцюбинський", 120, Drama));
	lib.AddBook(Book("Гаррі Поттер і філософський камінь", 1997, "Дж. К. Роулінг", 332, Fantasy));
	//lib.AddBook(Book("Дюна", 1965, "Френк Герберт", 896,Sci_Fi));
	//lib.AddBook(Book("Шерлок Холмс", 1892, "Артур Конан Дойл", 307, Fantasy));
	//lib.AddBook(Book("Енеїда", 1798, "Іван Котляревський", 350, Comedy));
	//lib.AddBook(Book("Місто", 1928, "Валер'ян Підмогильний", 300, Drama));
	//lib.AddBook(Book("Автостопом по галактиці", 1979, "Дуглас Адамс", 224, Comedy));
	//lib.AddBook(Book("1984", 1949, "Джордж Орвелл", 328, Sci_Fi));
	lib.ShowLibrary();


	Library copy(lib);
	cout << "---------------- Copy -------------" << endl;
	copy.ShowLibrary();

	Library newLib = copy;
	cout << "------------ New lib --------------" << endl;
	newLib.ShowLibrary();

	lib = copy = newLib;//<----------------

	TestLibrary(lib);
}

