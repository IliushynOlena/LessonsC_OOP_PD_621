#include <iostream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
	void PrintDate()
	{
		cout << "Birthdate : " << day << "/" 
			<< month << "/" << year << endl;
	}
};
class Human {
	string name;
	int age;
	Human()
	{

	}
	~Human()
	{

	}
	
};
class Student
{
	string name;
	string surname;
	string middlename;
	Date birthdate;
	string phone;
	int* marks;
	int countMarks;
	float averageMark;
	void AverageMark()
	{
		double summa = 0;
		for (int i = 0; i < countMarks; i++)
		{
			summa += marks[i];
		}
		averageMark = summa / countMarks;
	}
public:
	//ctor + TAB
	Student()//methods 
	{
		cout << "Default constructor" << endl;
		name = "no name";
		surname = "no surname";
		middlename = "no middlename";
		birthdate = { 1,1,1 };
		phone = "no phone";
		marks = nullptr;
		countMarks = 0;
		averageMark = 0;
	}
	Student(string name, string surname, string middlename)
	{
		cout << "Parametrized constructor" << endl;
		this->name = name;
		this->surname = surname;
		this->middlename = middlename;
		birthdate = { 1,1,1 };
		phone = "no phone";
		marks = nullptr;
		countMarks = 0;
		averageMark = 0;
	}
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
		AverageMark();


	}	
	void Print()
	{
		cout << "Name : " << name << endl;
		cout << "Surname : " << surname << endl;
		cout << "MiddleName : " << middlename << endl;
		birthdate.PrintDate();
		cout << "Phone : " << phone << endl;
		cout << "Marks : ";
		for (int i = 0; i < countMarks; i++)
		{
			cout << marks[i] << " ";
		}
		cout << "\nAverage Mark : " << averageMark << endl;	

	}
	void setName(string name){this->name = name;}
	void setLastName(string surname){this->surname = surname;}
	void Initialization()
	{
		name = "no name";
		surname = "no surname";
		middlename = "no middlename";
		birthdate = { 1,1,1 };
		phone = "no phone";
		marks = nullptr;
		countMarks = 0;
		averageMark = 0;
	}
	~Student()
	{
		cout << "Destructor" << name << endl;
		if (marks != nullptr)
			delete[]marks;
	}
};

class Reactangleee
{
//defeault constructor
	//destructor
};



int main()
{
	Student student;//default constrcutor
	//student.Initialization();
	student.Print();
	student.setName("Anton");
	student.setLastName("Chugun");
	student.AddMark(2);
	student.AddMark(4);
	student.AddMark(6);
	student.AddMark(3);
	student.Print();

	Student st2("Vasia", "Ivanchuk", "Mukolayouvich");
	st2.AddMark(7);
	st2.AddMark(12);
	st2.AddMark(8);
	st2.AddMark(9);
	st2.Print();

	if (5 > 2)
	{
		Student test("Boria", "Slipuy", "Nimuy");//Parametrized constructor
		test.AddMark(10);
		test.AddMark(11);
		test.AddMark(9);
		test.AddMark(8);
		test.Print();
	}
	
}

