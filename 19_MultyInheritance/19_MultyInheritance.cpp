#include <iostream>
using namespace std;

class Car
{
public:
    void Drive()
    {
        cout << "I drive" << endl;
    }
    void Use()
    {
        cout << "I drive" << endl;
    }
};
class Airplane {
public:
    void Fly()
    {
        cout << "I fly" << endl;
    }
    void Use()
    {
        cout << "I fly" << endl;
    }
};
class FlyCar: public Car, public Airplane
{

};

class A {
public :
   int value;
};
class B: public A{};
class C: public A{};
class S: public A{};

class D : public B, public C, public S
{

};
int main()
{
    FlyCar car;
    car.Drive();
    car.Fly();

    D obj;
    obj.value = 100;

    D::value = 100;
    D::A::value = 55;
    D::B::value = 6;
    D::B::A::value = 7;
    D::C::value = 7;
    D::C::A::value = 4;
    
    

    ((Car)car).Use();
    ((Airplane)car).Use();
    

}
