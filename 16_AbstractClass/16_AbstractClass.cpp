#include <iostream>
using namespace std;

class Animal//abstact class 
{
    string name;
    string place;
    float weight;
public:
    Animal() :name("no name"), place("no place") , weight(0) {}
    Animal(string n, string p, float w) :name(n), place(p)  
    {
      /*  if (w > 0)
        {
            weight = w;
        }
        else
        {
            weight = 0;
        }*/
        weight = (w > 0) ? w : 0;
    }
    void Show()const
    {
        cout << "Name : " << name << endl;
        cout << "Place : " << place << endl;
        cout << "Weight : " << weight << endl;
    }
    virtual void MakeSound() = 0;//pure virtual function 
    virtual void Move() {
        cout << "I am moving......" << endl;
    }
};
class Dog:public Animal
{
    string breed;
public:
    Dog():breed("no breed"),Animal(){}
    Dog(string name, string place,float weight, string b):breed(b),
        Animal(name,place,weight){}

    void MakeSound() override {
        cout << "Gav-gav-gav-gav-gav" << endl;
    }
    void Move()override {
        cout << "I am running and jumping......" << endl;
    }  
    void Show()
    {
        Animal::Show();
        cout << "Type breed : " << breed << endl;
    }
};
class Parrot : public Animal
{
    float flyHeight;
    bool canSpeak;
public:
    Parrot():flyHeight(0),canSpeak(false),Animal(){}
    Parrot(string name,string place,float weight, float fH, bool speak):
        flyHeight(fH),canSpeak(speak),Animal(name,place,weight){}
    void MakeSound() override {
        cout << "Kar-kar-kar-kar-kar-kar" << endl;
    }
    void Move() {
        cout << "I am flying up to "<< flyHeight<<  " and I can speak or not : "
            << canSpeak<< endl;
    }
    void Show()
    {
        Animal::Show();
        cout << "Fly Height : " << flyHeight << "m " << endl;
        cout << "Can speak : " << canSpeak << endl;
    }
};
class Amphibian : public Animal//absract class
{
protected:
    float swimDeep;
public:
    Amphibian() :swimDeep(), Animal() {}
    Amphibian(string name, string place, float weight,float sD) :swimDeep(sD),
        Animal(name, place, weight) {}

   /* void MakeSound() override {
        cout << "Kar-kar-kar-kar-kar-kar" << endl;
    }*/
    void Move() {
        cout << "I am swimming down  " << swimDeep<< endl;
    }
    void Show()
    {
        Animal::Show();
        cout << "Swim deep : " << swimDeep << "m " << endl;
    }

};
class Frog: public Amphibian
{
public:
    Frog() :Amphibian() {}
    Frog(string name,string place, float weight, float swim) :
        Amphibian(name,place,weight,swim) {}

     void MakeSound() override {
         cout << "Kva-kva-kva-kva-kva-kva" << endl;
     }
    void Move() {
        cout << "I am swimming down  " << swimDeep <<  endl;
    }
};

void RollCall(Animal& a)
{
    a.MakeSound();
    a.Move();
}
int main()
{
   

   
  /*  Animal animal("Tom", "Flat",12);
    animal.Move();
    animal.Show();
    animal.MakeSound();*/
    Dog dog("Roki", "Flat", 12, "Taksa");
    dog.Show();
    dog.MakeSound();
    dog.Move();

    Parrot parrot("Kesha", "House", 0.6, 5, true);
    parrot.MakeSound();
    parrot.Move();
    parrot.Show();
    
    Frog frog("Crazy Frog", "Lake", 0.2, 2);
    frog.MakeSound();
    frog.Move();
    frog.Show();


    RollCall(dog);
    RollCall(parrot);
    RollCall(frog);


}

