

#include <iostream>
using namespace std;

class Point 
{
    int x;
    int y;
public:
    Point()
    {
        x = y = 0;
    }
    explicit Point(int value)
    {
        this->x = value;
        this->y = value;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void Print()const
    {
        cout << "X : " << x << " . Y : " << y << endl;
    }
   Point Plus(const Point &other)const
    {
        Point res(this->x + other.x, this->y + other.y);
        return res;
    }
   Point Minus(const Point& other)const
   {
       Point res(this->x - other.x, this->y - other.y);
       return res;
   }
   //Overload operators
   //void operator [symbol operator]() 

#pragma region Математичні оператори
   Point operator +(const Point& other)const
   {
       Point res(this->x + other.x, this->y + other.y);
       return res;
   }
   Point operator -(const Point& other)const
   {
       Point res(this->x - other.x, this->y - other.y);
       return res;
   }
   Point operator *(const Point& other)const
   {
       Point res(this->x * other.x, this->y * other.y);
       return res;
   }
   Point operator /(const Point& other)const
   {
       Point res(this->x / other.x, this->y / other.y);
       return res;
   }
#pragma endregion
#pragma region Binary Operators
   Point operator +=(const Point& other)
   {
       this->x += other.x;
       this->y += other.y;
       return *this;
    } 

  Point operator = (const Point& other)
   {
       this->x = other.x;
       this->y = other.y;
       return *this;
   }
#pragma endregion
#pragma region Uno Operators
   Point operator -()const
   {
       //return Point(this->x*  -1, this->y* -1);
       return Point(-x, -y);
   }

   Point operator--()//prefix form decrement
   {
       --this->x;
       --this->y;
       return *this;
   }
   Point operator++(int k)//postfix form increment
   {
       this->x++;
       this->y++;
       return *this;
   }
   Point operator--(int)//postfix form decrement
   {
       this->x--;
       this->y--;
       return *this;
   }


#pragma endregion

#pragma region Logic operators  < > <= >=  !  == !=
   bool operator > (const Point& other)const
   {
       /*if ((this->x + this->y) > (other.x + other.y))
           return true;
       else
           return false;*/
       return  ((this->x + this->y) > (other.x + other.y));
   }
   bool operator < (const Point& other)const
   {
       return  ((this->x + this->y) < (other.x + other.y));
   }
   bool operator >= (const Point& other)const
   {
       return  ((this->x + this->y) >= (other.x + other.y));
   }

   bool operator == (const Point& other)const
   {
       return  ((this->x == other.x) && (this->y == other.y));
   }
   bool operator != (const Point& other)const
   {
       //return  ((this->x != other.x) || (this->y != other.y));

       return !(*this == other);
   }

#pragma endregion
   int getX()const { return x; }
   int getY()const { return y; }
   void setX(int newX) { this->x = newX; }
   void setY(int newY) { this->y = newY; }
   //friend function
   friend Point operator++(Point& point);
   friend ostream& operator << (ostream& out, const Point& point);
   friend istream& operator >>(istream& in, Point& point);
};
//global function
bool operator <= (const Point& left,const Point& right)
{
    return  ((left.getX() + left.getY()) <= (right.getX() + right.getY()));
}
Point operator++(Point& point)//prefix form increment
{
    point.x++;
    point.y++;
    return point;
}
//Point operator++(Point &point)//prefix form increment
//{
//    point.setX(point.getX() + 1);
//    point.setY(point.getY() + 1);
//    return point;
//}
ostream& operator << (ostream& out, const Point& point)
{
    out << "X [" << point.x << "]" << "  Y[" << point.y << "]";
    return out;
}
istream& operator >>(istream& in, Point& point)
{
    in >> point.x;
    in >> point.y;
    return in;
}

void Clear() { system("cls"); }

class Book {
    string author;
    string name;
    string publish;
    int year;
    int pages;

public:
    Book() {
        this->author = "No author";
        this->name = "No name";
        this->publish = "No publisher";
        this->year = 0;
        this->pages = 0;
    }
    Book(string author, string name, string publish, int year, int pages) {
        this->author = author;
        this->name = name;
        this->publish = publish;
        this->year = year;
        this->pages = pages;
    }
    Book(const Book& other) {
        this->author = other.author;
        this->name = other.name;
        this->publish = other.publish;
        this->year = other.year;
        this->pages = other.pages;
    }
    explicit Book(int year) {
        this->author = "No author";
        this->name = "No name";
        this->publish = "No publisher";
        this->year = year;
        this->pages = 0;
    }

    void Print()const {
        cout << "Author: " << author << '\n';
        cout << "Name: " << name << '\n';
        cout << "Publish: " << publish << '\n';
        cout << "Year: " << year << '\n';
        cout << "Pages: " << pages << '\n';
    }
    string getAuthor()const {
        return author;
    }
    string getPublis()const {
        return publish;
    }
    int getYear()const {
        return year;
    }
    friend ostream& operator << (ostream& out, const Book& book);
    void setPages(int p) { this->pages += p; }
};
ostream& operator << (ostream& out, const Book& book)
{
    out << book.author << " "<< book.name << "pages "<< book.pages << endl;
    return out;
}
class Library {
    Book* books;
    int countBooks;

public:
    Library() {
        books = nullptr;
        countBooks = 0;
    }
    ~Library() {
        if (countBooks != 0) delete[] books;
    }
    Book getBook(int index)
    {
        if (index >= 0 && index < countBooks)
            return books[index];
    }
    Book operator[](int index)
    {
        if (index >= 0 && index < countBooks)
            return books[index];
    }
    void ChangePages(int countP) {

        for (int i = 0; i < countBooks; i++)
        {
            books[i].setPages(countP);
        }
    }
    void operator()(int countP) {

        for (int i = 0; i < countBooks; i++)
        {
            books[i].setPages(countP);
        }
    }
    void operator()(int countP, string name) {

        for (int i = 0; i < countBooks; i++)
        {
            if(books[i].getAuthor()== name)
                books[i].setPages(countP);
        }
    }
    void PrintAll() {
        for (int i = 0; i < countBooks; i++) {
            books[i].Print();
            cout << '\n';
        }
    }
    void PrintAuthor(string author)const {
        for (int i = 0; i < countBooks; i++)
            if (books[i].getAuthor() == author) books[i].Print();
    }
    void PrintPublish(string publish)const {
        for (int i = 0; i < countBooks; i++)
            if (books[i].getPublis() == publish) books[i].Print();
    }
    void PrintYear(int year)const {
        for (int i = 0; i < countBooks; i++)
            if (books[i].getYear() > year) books[i].Print();
    }
    void addBook(Book book) {
        Book* temp = new Book[countBooks + 1];

        for (int i = 0; i < countBooks; i++) {
            temp[i] = books[i];
        }

        temp[countBooks] = book;

        delete[] books;
        books = temp;
        countBooks++;
    }
};
int main()
{
#pragma region Books



    Library lib;
    lib.addBook(Book("Author1", "Book1", "Publisher1", 1000, 100));
    lib.addBook(Book("Author2", "Book2", "Publisher2", 2000, 200));
    lib.addBook(Book("Author3", "Book3", "Publisher3", 3000, 300));
    lib.addBook(Book("Author4", "Book4", "Publisher4", 4000, 400));
    lib.addBook(Book("Author5", "Book5", "Publisher5", 5000, 500));
    lib.addBook(Book("Author6", "Book6", "Publisher6", 6000, 600));

    cout << "All books:\n\n";
   // lib.PrintAll();
#pragma endregion
    Book search_book1 = lib.getBook(0);
    Book search_book2 = lib.getBook(0);
    search_book1 + search_book2;
    cout << search_book1;
    cout << lib[0] << endl;
    cin.get();
    Clear();
    lib.PrintAll();
    lib.ChangePages(100);
    lib.PrintAll();
    lib(500);
    lib.PrintAll();
    lib(1000, "Author6");
    lib.PrintAll();



    //5555  
    //int hours =  5555/3600  = 1
    // int minute = 5555/60%60 = 32
    // int seconds = 
    //+ - * / < > <= >= == !=  = +=  -= 
    //uno (-5)  (+5)  ++ --
    /*int a = 5, b = 4, c = 88;
    a = 100;
    a = b = c;//<------------------
    cout << a + b << endl;
    cout << a << endl;
    cout << b << endl;
    a += b;
    cout << a << endl;
    cout << b << endl;

    cout << a - b << endl;
    cout << a * b << endl;

    Point p1(5, 3);
    Point p2(7, 8);

    //ostream cout;
    //istream cin;
    cout << p1<< endl;
    cout << p2 << endl;
   // p1.Print();
    cout << "Enter point x and y : ";
    cin >> p1;
    cout << p1;



    /*Lessons 2*/
    /*p1.Print();
    ++p1;
    p1.Print();
    --p1;
    p1.Print();

    p1++;
    p1.Print();
    p1--;
    p1.Print();
    if (p1 <= p2)
       cout << "p1 <= p2" << endl;
   else
       cout << "p1 >= p2" << endl;





       */
  /* 
  * Lesson 1
  Point res = p1 + p2;
    res = p1 - p2;
    res = p1 * p2;*/

    //Point res = p1.Plus(p2);
    //cout << "Point 1 : "; p1.Print();
    //cout << "Point 2 : "; p2.Print();
    //cout << "Res : "; res.Print();
    //res = p1.Minus(p2);
    //cout << "Res : "; res.Print();

    //res = p1 + p2;//res = p1.operator+(p2);
    //cout << "Res : "; res.Print();

    //res = p1 - p2;//res = p1.operator-(p2);
    //cout << "Res : "; res.Print();

    //res = p1 * p2;//res = p1.operator*(p2);
    //cout << "Res : "; res.Print();

    //res = p1 / p2;//res = p1.operator/(p2);
    //cout << "Res : "; res.Print();


    //cout << "Point 1 : "; p1.Print();
    //cout << "Point 2 : "; p2.Print();
    //p1 += p2;
    //cout << "Point 1 : "; p1.Print();
    //cout << "Point 2 : "; p2.Print();

    //res = -p1;
    //cout << "Res : "; res.Print();
    //cout << "------------------------" << endl;
    //cout << "Point 1 : "; p1.Print();
    //cout << "Point 2 : "; p2.Print();
    //cout << "Res : "; res.Print();

    //res = p1 = p2;
    //cout << "------------------------" << endl;
    //cout << "Point 1 : "; p1.Print();
    //cout << "Point 2 : "; p2.Print();
    //cout << "Res : "; res.Print();

    //if (p1 > p2)
    //    cout << "p1 > p2" << endl;
    //else
    //    cout << "p1 < p2" << endl;

    //if (p1 < p2)
    //    cout << "p1 < p2" << endl;
    //else
    //    cout << "p1 > p2" << endl;

    //if (p1 == p2)
    //    cout << "p1 == p2" << endl;
    //else
    //    cout << "p1 != p2" << endl;

    //if (p1 != p2)
    //    cout << "p1 != p2" << endl;
    //else
    //    cout << "p1 == p2" << endl;
}

