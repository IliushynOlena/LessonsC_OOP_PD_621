#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};
class Student
{
private:
	string name;
	int age;
	int* marks;
	int countMarks;
public:
	Student()
	{
		this->name = "no name";
		this->age = 0;
		this->marks = nullptr;
		this->countMarks = 0;
	}
	Student(string name, int age)
	{
		this->name = name;
		this->age = age;
		this->marks = nullptr;
		this->countMarks = 0;
	}
	Student(const Student &other)
	{
		this->name = other.name;
		this->age = other.age;
		this->countMarks = other.countMarks;
		//this->marks = other.marks;
		this->marks = new int[countMarks];
		for (int i = 0; i < countMarks; i++)
		{
			this->marks[i] = other.marks[i];
		}
	
	}
	//setter or getter
	void AddMark(int mark)
	{
		int* temp = new int[countMarks + 1];
		for (int i = 0; i < countMarks; i++)
		{
			temp[i] = marks[i];
		}
		temp[countMarks] = mark;
		if (marks != nullptr)
			delete[]marks;
		marks = temp;
		countMarks++;
	}
	void Delete()
	{
		if (marks != nullptr)
			delete[]marks;
	}
	void Print()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Count marks : " << countMarks << endl;
		cout << "MArks : ";
		for (int i = 0; i < countMarks; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl;
	}
	~Student()
	{
		Delete();
	}
}; 
class Array
{
	long* arr;
	int size;

};
struct Vagon {
	int number;
	int places;
	int passangers;
};
class Train {
	string model;
	Vagon* vagons;
	int countVagons;
};
int main()
{
	int a;//змінна 
	Student st;//об*єкт
	st.Print();

	Student student("Ivan", 18);
	student.AddMark(12);
	student.AddMark(7);
	student.AddMark(8);
	student.AddMark(11);
	student.AddMark(10);
	student.Print();

	//Student(const Student &other)
	//this->name = other.name;
	Student copy = Student(student);

	cout << "Original " << endl;
	student.Print();
	cout << "Copy" << endl;
	copy.Print();


	/*
	Point point{ 15,25 };
	int a;
	int* ptr;
	int b = 10;
	int c = 3.33;
	//cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	int numbers[2];
	numbers[0] += 2;
	cout << numbers[0] << endl;
	cout << numbers[1] << endl;

	int number = 2;//ініціалізація з копіюванням

	int value(2.2);//пряма ініціалізація

	int size{ 33 };//уніфікована ініціалізація
	cout << number << endl;
	cout << value << endl;
	cout << size << endl;

	int answer{ 5 };
	//int answer= 5 ;
	const float goodTemp{ 36.6 };
	int marks[3]{ 1,4,7 };
	int matrix[2][2]{ {1,2},{3,4} };
	int* dataPtr{ nullptr };*/

}



