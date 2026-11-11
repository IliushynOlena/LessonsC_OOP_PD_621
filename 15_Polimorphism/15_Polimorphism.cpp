#include <iostream>
#include <Windows.h>
using namespace std;

class Car
{
private:
	string model;
	int year;
protected:
	int speed;
	float volume;
public:
	Car() :model("no model"), year(0), speed(0), volume(0) {}
	Car(string m, int y, float v) :model(m), year(y), speed(0), volume(v){}
	virtual void Drive()const
	{
		cout << "I am a Car! I can drive with speed : " << speed << "km/h" << endl;
	}
	void setSpeed(int speed)
	{
		if (speed > 0)
			this->speed = speed;
		else
			speed = 0;
	}
	virtual void Print()const
	{
		cout << "---------------Car------------------" << endl;
		cout << "Model : " << model << endl;
		cout << "Year : " << year << endl;
		cout << "Speed : " << speed << endl;
		cout << "Volume : " << volume << endl;
	}
};
class PoliceCar: public Car
{
	int soundVolume;
public:
	PoliceCar() : soundVolume(0), Car() {}
	PoliceCar(string n, int y,float v, int sound) : soundVolume(sound),
		Car(n,y,v) {}
	void Drive()const 
	{
		cout << "I am a Police Car. I can drive with speed " << speed << " km/h" << endl;
	}
	void Print()const override
	{
		Car::Print();
		cout << "Sound Volume : " << soundVolume << "db" << endl;
	}
	void BeepBeep()
	{
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(500);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(900);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(523, 100); Sleep(300);
        Beep(523, 100); Sleep(100);
        Beep(523, 100); Sleep(1100);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(311, 300); Sleep(300);
        Beep(296, 300); Sleep(300);
        Beep(262, 300); Sleep(1300);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(330, 100); Sleep(700);
        Beep(440, 100); Sleep(300);
        Beep(392, 100); Sleep(500);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        /*Intro*/
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(196, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(330, 100); Sleep(125);
        Beep(392, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(660, 100); Sleep(125);
        Beep(784, 100); Sleep(575);
        Beep(660, 100); Sleep(575);
        Beep(207, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(311, 100); Sleep(125);
        Beep(415, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(622, 100); Sleep(125);
        Beep(830, 100); Sleep(575);
        Beep(622, 100); Sleep(575);
        Beep(233, 100); Sleep(125);
        Beep(294, 100); Sleep(125);
        Beep(349, 100); Sleep(125);
        Beep(466, 100); Sleep(125);
        Beep(587, 100); Sleep(125);
        Beep(698, 100); Sleep(125);
        Beep(932, 100); Sleep(575);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
     

		Beep(400,200);

	}
};

class SportCar : public Car
{
    int turboSpeed;
public:
    SportCar() : turboSpeed(0), Car() {}
    SportCar(string n, int y, float v, int ts) : turboSpeed(ts),
        Car(n, y, v) {
    }
    void Drive()const 
    {
        cout << "I am a Sport Car. I can drive with speed " << speed << " km/h" << endl;
    }
    void Print()const override
    {
        Car::Print();
        cout << "Turbo Speed : " << turboSpeed << "db" << endl;
    }
    void Nitro()
    {
        speed += turboSpeed;
        cout << "Turbo speed " << speed << "km/h" << endl;
    }
};
void TestDrive(Car& car)
{
    car.setSpeed(70);
    car.Drive();
    car.Print();
    cout << endl;
    
}
int main()
{

    Car car("BMV", 2024, 3.0);
    car.setSpeed(280);
    car.Drive();
    car.Print();
   
    cout << "------------------------------" << endl;
	PoliceCar police("Renult Duster",2015,1.6,500);
    police.setSpeed(220);
	police.Drive();
    police.Print();

    SportCar sport("Formula 1", 2025, 2.5, 100);
    sport.setSpeed(150);
    sport.Drive();
    sport.Print();
	//police.BeepBeep();
    TestDrive(car);
    TestDrive(police);
    TestDrive(sport);
    

    Car* cars[3]{
        new Car("BMV", 2024, 3.0),
        new PoliceCar("Renult Duster",2015,1.6,500),
        new SportCar("Formula 1", 2025, 2.5, 100)
    };

    for (int i = 0; i < 3; i++)
    {
        cars[i]->Drive();
        cars[i]->Print();
        delete cars[i];
    }
	

   




}
