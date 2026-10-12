#include <iostream>
using namespace std;
/*
struct  Player
{
    string name;
    short age;
    int games;
    int goals;
};

void PrintPlayer(Player &pl)
{
    cout << "Name : " << pl.name << endl;
    cout << "Age : " << pl.age << endl;
    cout << "Games : " << pl.games << endl;
    cout << "Goals : " << pl.goals << endl;
}

void InitPlayer(Player& pl)
{
    cout << "Enter name : "; cin >> pl.name;
    cout << "Enter age : "; cin >> pl.age;
    pl.games = 0;
    pl.goals = 0;
}
void AddGameToPlayer(Player& pl, int goals = 0)
{
    pl.games++;
    pl.goals += goals;
}

strcut Player //public
{
    string name;
    short age;
    int games;
    int goals;
};
 */
class Player //private
{
private:
    string name;
    short age;
    int games;
    int goals;
public:
    void PrintPlayer()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Games : " << games << endl;
        cout << "Goals : " << goals << endl;
    }
    void InitPlayer()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter age : "; cin >> age;
        games = 0;
        goals = 0;
    }
    void AddGameToPlayer( int goals = 0)
    {
        games++;
        this->goals += goals;
    }
};
struct MyStruct
{

};
class Student
{
private:
    string name;// data members
    int marks[3];
public:
    //setter
    void setName(string name)
    {
        this->name = name;
    }
    void setMark(int index, int mark) {
        if (mark >= 1 and mark <= 12)
        {
            marks[index] = mark;
        }
        else
        {
            marks[index] = 0;
        }
    }
    
    //getter
    string getName()
    {
        return name;
    }
    int getMark(int index)
    {
        return marks[index];
    }
    double getAverage()//member function, функції-члени класу,методи
    {
        double summa = 0;
        for (int i = 0; i < 3; i++)
        {
            summa += marks[i];
        }
        return (double)summa / 3;
    }
};

class Point {
private:
    int x;
    int y;
    int z;
public:

};
int main()
{
    Student st;
   /* st.Init();
    st.Print();

    st.setX(100);
    st.setX(100);
    st.setX(100);

    st.getX();
    st.getX();
    st.getX();*/


    st.setName("Ivan") ;
    st.setMark(0, 10);
    st.setMark(1, 11);
    st.setMark(2, 9);


    cout << "Name : " << st.getName() << " Marks : " << st.getMark(0)<<" "<<
        st.getMark(1) << " " << st.getMark(2) <<endl;

    cout << "Average mark : " << st.getAverage() << endl;


   /* Player player;
    player.InitPlayer();
    player.PrintPlayer();


    player.AddGameToPlayer(3);
    player.PrintPlayer();*/


    //Player player;
    //InitPlayer(player);
    //PrintPlayer(player);
    //AddGameToPlayer(player);
    //AddGameToPlayer(player,1);
    //AddGameToPlayer(player,2);
    //PrintPlayer(player);
    




}

