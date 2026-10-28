#include "Book.h"

Book::Book()
{
	title = "no title";
	year = 0;
	author = "no author";
	pages = 0;
	genre = None;
}

void Book::ShowInfo() const
{
	cout << "Title : " << title << " Year : " << year << " Author : " 
		<< author << " Pages : " << pages << " Genre : ";
	switch (genre)
	{
	case None:cout << "None " << endl;break;
	case Fantasy:cout << "Fantasy " << endl;break;
	case Roman:cout << "Roman " << endl;break;
	case History:cout << "History " << endl;break;
	case Drama:cout << "Drama " << endl;break;
	case Sci_Fi:cout << "Sci_Fi " << endl;break;
	case Horror:cout << "Horror " << endl;break;
	case Comedy:cout << "Comedy " << endl;break;
	case Political:cout << "Political " << endl;break;
	case Education:cout << "Education " << endl;break;
	}
}

