#pragma once
#include "Book.h"
class Library
{
	string name;
	string address;
	Book* books;
	int countBooks;
public:
	Library();
	Library(string name, string address);
	Library(const Library & other);
	Library& operator =(const Library& other);
	Library(Library&& other)
	{
		this->name = other.name;
		this->address = other.address;
		this->countBooks = other.countBooks;
		this->books = other.books;
		other.books = nullptr;
		cout << "Move constructor" << endl;
	}
	void ShowLibrary()const;
	~Library();
	void AddBook(Book b);
};

