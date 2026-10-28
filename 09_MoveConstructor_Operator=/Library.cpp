#include "Library.h"

Library::Library()
{
	name = "no name";
	address = "no address";
	books = nullptr;
	countBooks = 0;
}

Library::Library(string name, string addres)
{
	this->name = name;
	this->address = address;
	books = nullptr;
	countBooks = 0;
}

Library::Library(const Library& other)
{
	this->name = other.name;
	this->address = other.address;
	this->countBooks = other.countBooks;
	this->books = new Book[countBooks];
	for (int i = 0; i < countBooks; i++)
	{
		this->books[i] = other.books[i];
	}
	cout << "Copy constructor" << endl;
}

Library& Library::operator=(const Library& other)
{
	this->name = other.name;
	this->address = other.address;
	this->countBooks = other.countBooks;
	if (books != nullptr)
		delete[]books;
	this->books = new Book[countBooks];
	for (int i = 0; i < countBooks; i++)
	{
		this->books[i] = other.books[i];
	}
	cout << "Operator = " << endl;
	return *this;
}

void Library::ShowLibrary() const
{
	cout << "Name library : " << name << endl;
	cout << "Address library : " << address << endl;
	for (int i = 0; i < countBooks; i++)
	{
		books[i].ShowInfo();
		cout << endl << endl;;
	}
}

Library::~Library()
{
	if (books != nullptr)
		delete[]books;
}

void Library::AddBook(Book b)
{
	Book *temp = new Book[countBooks + 1];
	for (int i = 0; i < countBooks; i++)
	{
		temp[i] = books[i];
	}
	temp[countBooks] = b;
	if (books != nullptr)
		delete[]books;
	countBooks++;
	books = temp;
}
