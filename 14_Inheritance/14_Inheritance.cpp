#include <iostream>
using namespace std;

class Enemy {
protected:
	string name;
	int health;
	float strength;
	static const int maxHeal = 100;
public:
	Enemy():name("no name"),health(maxHeal),strength(0){}
	Enemy(string name,float s):name(name),health(maxHeal),strength(s){}
	void Print()const
	{
		cout << "Name : " << name << endl;
		cout << "Health : " << health <<"%" << endl;
		cout << "Strength : " << strength << endl;
	}
	void DecreaseHealth(int value)//100 - 15
	{
		if (health - value <= 0)
			health = 0;
		else
			health -= value;

	}
	bool IsAlive()const
	{
		return health > 0;
	}
	void Fight(int damage)
	{
		cout << "Getting damage " << damage << "%" << endl;
		DecreaseHealth(damage);
		cout << "Health after damage " << health << "%" << endl;
	}
	float Attack()
	{
		cout << "Attacking with strenght : " << strength << endl;
		return strength;
	}
};
//Inheritance : 
//class Child : [spetificator] Parent
//[spetificator] ---> public, private, protected
class Dragon : public Enemy
{
	float armor;
public:
	Dragon() :armor(0), Enemy() {}
	Dragon(string n, float s, float a) :armor(a), Enemy(n,s) {}
	void Fight(int damage)
	{
		Enemy::Fight(damage - armor);
	}
	void Print()const
	{
		cout << "--------------------Dragon----------------" << endl;
		Enemy::Print();
		cout << "Armor " << armor << endl;
	}

};
class Wizard : public Enemy
{
	float turbo_attack;
public:
	Wizard():turbo_attack(0),Enemy(){}
	Wizard(string n, float s, float t):turbo_attack(t),Enemy(n,s){}
	float AttackWithTurboPower()
	{
		cout << "Attacking with turbo power " << turbo_attack << endl;
		return turbo_attack+strength;
	}
	void Print()const
	{
		cout << "--------------------Wizard----------------" << endl;
		Enemy::Print();
		cout << "Turbo attack power " << turbo_attack << endl;
	}
};

int main()
{
	Dragon dragon("Lefttarion",5,2);
	Dragon boss("Righttarion",7,4);
	dragon.Print();
	boss.Print();
	int i = 1;
	do
	{
		cout << "-----------------Round "<< i<<" ---------------- - " << endl;
		dragon.Fight(boss.Attack());
		boss.Fight(dragon.Attack());		
		i++;
		cout << endl;

	} while (boss.IsAlive()&&dragon.IsAlive());
	dragon.Print();
	boss.Print();


	i = 1;
	Wizard wizard("Chaklun", 10,10);
	do
	{
		cout << "-----------------Round " << i << " ---------------- - " << endl;
		wizard.Fight(boss.Attack());
		boss.Fight(wizard.Attack());		
		i++;
		cout << endl;

	} while (boss.IsAlive()&&wizard.IsAlive());
	wizard.Print();
	boss.Print();

	




}
