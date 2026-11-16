#include <iostream>
using namespace std;

class Person //abstract class
{
    string name;
public:
    Person() :name("no name"){
    }
    Person(string name) :name(name) {}
    virtual void Print()const
    {
        cout << "Name : " << name << endl;
    }
    virtual ~Person() = 0 {}//pure virtual destructor
};

class Aspirant : public Person
{
    string* subjects;
    int countSubjects;
public:
    Aspirant() :subjects(nullptr), countSubjects(0), Person() {}
    Aspirant(string name, initializer_list<string> list) :
        Person(name)
    {
        this->countSubjects = list.size();
        subjects = new string[countSubjects];
        int i = 0;
        for (string sub : list)
        {
            subjects[i] = sub;
            i++;
        }
    }

    void Print()const {
        Person::Print();
        cout << "Subjects : ";
        for (int i = 0; i < countSubjects; i++)
        {
            cout << subjects[i] << "  |  ";
        }
        cout << endl<<endl;
    }
    ~Aspirant() {
        if (subjects != nullptr)
            delete[]subjects;
    }
};

int main()
{
    srand(time(0));
  /*  Person student("Vasia");
    student.Print();*/

    Aspirant aspirant("Ivan", { "Ukrainian revolution","UNR","World war" });
    aspirant.Print();

    cout << "\n---------------------------------" << endl;
    Person* group[3]
    {
       // new  Person("Vasia"),
        new  Aspirant("Ivan", { "Ukrainian revolution","UNR","World war" }),
        new  Aspirant("Ivan", { "Ukrainian revolution","UNR","World war" }),
        new  Aspirant("Petro", { "Water","Oil","Gasoline" }),
    };

    for (int i = 0; i < 3; i++)
    {
        group[i]->Print();
        delete  group[i];
    }

}

