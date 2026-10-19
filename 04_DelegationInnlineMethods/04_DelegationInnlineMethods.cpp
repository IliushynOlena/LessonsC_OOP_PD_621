#include <iostream>
using namespace std;
#define PI 3.14;

inline void Hello()
{
    cout << "hello" << endl;
}

class Human
{
    string name;
    int age;
    int weight;
   static int count_humans;
public:
    static int getCount()
    {
        return count_humans;
    }
    Human()
    {
        name = "no name";
        age = 0;
        weight = 0;
    }
    //список ініціалізаторів
    //Human() :name{ "no name" }, age{ 0 }, weight{ 0 }
   Human() :name("no name"), age(0), weight(0) { count_humans++; }
    Human(string name) :Human()
    {
        this->name = name;
        // age = 0;
        //weight = 0;
  

    }
    Human(string name, int age):Human(name)
    {
        //this->name = name;
        this->age = age;
        //this->weight = 0;
    }
    Human(string name, int age, int weight):Human(name, age)
    {
        //this->name = name;
        //this->age = age;
        this->weight = weight;
    }
    void Print()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Weight : " << weight << endl;
        cout << endl << endl;
    }
   

};

int Human::count_humans = 0;
int main()
{
    cout << "Count humans : " << Human::getCount() << endl;
    Human::getCount();


    Human h1;    
    h1.Print();
   
    cout << "Count humans : "<< h1.getCount() << endl;

    Human h2("Oleg");
    h2.Print();
    cout << "Count humans : " << h2.getCount() << endl;


    Human h3("Ivan", 17);
    h3.Print();
    cout << "Count humans : " << h1.getCount() << endl;
    cout << "Count humans : " << h2.getCount() << endl;
    cout << "Count humans : " << h3.getCount() << endl;
    cout << "Count humans : " << Human::getCount() << endl;



    Human h4("Mukola", 47, 89);
    h4.Print();
    cout << "Count humans : " << h4.count_humans << endl;


    Human::count_humans = 0;
    cout << "Count humans : " << Human::count_humans << endl;



    //cout << "hello" << endl;// Hello();
    //cout << 3.14 ;// Hello();
}

