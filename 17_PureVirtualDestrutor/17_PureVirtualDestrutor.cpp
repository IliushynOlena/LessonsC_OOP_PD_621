//#include <iostream>
//using namespace std;
//
//class Student {
//    string name;
//    string spetialization;
//    int age;
//    int* marks;
//    int countMark;
//public:
//    Student() :name("no name"), spetialization("none") ,age(0), 
//        marks(nullptr), countMark(0) {}
//    Student(string name, string spet, int age) :name(name),spetialization(spet),
//        age(age)
//    {
//        countMark = rand() % 15 + 1;
//        marks = new int[countMark];
//        for (int i = 0; i < countMark; i++)
//        {
//            marks[i] = rand() % 12 + 1;//0.......11
//        }
//    }
//    virtual void Print()const
//    {
//        cout << "Name : " << name << endl;
//        cout << "Spetialization : " << spetialization << endl;
//        cout << "Age : " << age << endl;
//        cout << "Marks : " ;
//        for (int i = 0; i < countMark; i++)
//        {
//            cout << marks[i] << " ";
//        }
//        cout << endl << endl;
//    }
//    virtual  ~Student()
//    {
//        if (marks != nullptr)
//            delete[]marks;
//    }
//};
//
//class Aspirant : public Student
//{
//    string *subjects;
//    int countSubjects;
//public:
//    Aspirant() :subjects(nullptr),countSubjects(0), Student() {}
//    Aspirant(string name, string spet,int age,initializer_list<string> list) :
//        Student(name,spet,age) 
//    {
//        this->countSubjects = list.size();
//        subjects = new string[countSubjects];
//        int i = 0;
//        for (string sub : list)
//        {
//            subjects[i] = sub;
//            i++;
//        }
//    }
//    
//    void Print()const {
//        Student::Print();
//        cout << "Subjects : " ;
//        for (int i = 0; i < countSubjects; i++)
//        {
//            cout << subjects[i] << "  |  ";
//        }
//        cout << endl;
//    }
//    ~Aspirant(){
//        if (subjects != nullptr)
//            delete[]subjects;
//    }
//};
//
//int main()
//{
//    srand(time(0));
//    Student student("Vasia","Programmer", 18);
//    student.Print();
//
//    Aspirant aspirant("Ivan", "History", 20, { "Ukrainian revolution","UNR","World war" });
//    aspirant.Print();
//
//    cout << "\n---------------------------------" << endl;
//    Student* group[3]
//    {
//        new  Student("Vasia","Programmer", 18),
//        new  Aspirant("Ivan", "History", 20, { "Ukrainian revolution","UNR","World war" }),
//        new  Aspirant("Petro", "Chemistry", 21, { "Water","Oil","Gasoline" }),
//    };
//
//    for (int i = 0; i < 3; i++)
//    {
//        group[i]->Print();
//        delete  group[i];
//    }
//    
//}
//
