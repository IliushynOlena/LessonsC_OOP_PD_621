#include <iostream>

using namespace std;


//void Change(int* a)//int * a =& 0x2s54f
//{
//    (*a)++;
//}
//void Change(int& a)
//{
//    a++;
//}
int main()
{
    //int num = 7;
    //Change(num);
    string name = "Olena";
    string surname = "Iliushyn";
    cout << name << " " << surname << endl;
    surname += "!!!!!!!!!!!!!!!!!";
    cout << name << " " << surname << endl;

    string one("Hello world");
    cout << one << endl;

    string two(20, '$');
    cout << two << endl;

    string three(one);//copy ctor
    cout << three << endl;

    one += "Oppppssss!!!";
    cout << one << endl;

    string five({ 's','t','r','i','n','g'});
    cout << five << endl;
    five[1] = 'p';
    cout << five << endl;
    cout << five[0] << endl;

    string six = one + five;
    cout << six << endl;

    char alls[] = "All's well that ends well!";
    string seven(alls, 20);
    cout << seven << endl;

    string eight(alls + 6, alls + 10);
    cout << eight << endl;

    string nine(&alls[6], &alls[10]);
    cout << nine << endl;

    string ten(alls);
    cout << "Size = " << ten.size() << endl;
    cout << "Capacity = " << ten.capacity() << endl;
  /*
    for (int i = 0; i < ten.size(); i++)
    {
        cout << ten[i] << endl;
    }
    cout << "--------------------------" << endl;
    for (auto s : ten)
    {
        cout << s << endl;
    }
    cout << "--------------------------" << endl;
    for (auto i = ten.begin(); i != ten.end(); i++)
    {
        cout << *i << endl;
    }
*/
    int a = 5;

    int* ptr = &a;

    cout << *ptr << endl;

    const char c_str[] = "Hello";
    string str = "hello world!";

    cout << "Size : " << str.size() << endl;
    cout << "Capacity : " << str.capacity() << endl;

    //str.clear();

    cout << "Size : " << str.size() << endl;
    cout << "Capacity : " << str.capacity() << endl;

    if (str.empty())
        cout << "Str is empty" << endl;

    cout << str << endl;

    //append
    str.append(" end. ");
    cout << str << endl;

    str.append(c_str,3);
    cout << str << endl;

    str.append({ 'g','j','k','l' });
    cout << str << endl;

    str.append(str.begin()+5, str.end()-4);
    //str.append(str.begin(), str.end());
    cout << str << endl;

    str += "slfaslkf";
    cout << str << endl;

    str.insert(str.begin(), 'H');
    cout << str << endl;
    str.insert(0, 5, 'A');
    cout << str << endl;

    str.insert(5, "jjjjjjjjjjjj");
    cout << str << endl;

    str.insert(0, c_str);
    cout << str << endl;

    str.insert(str.end(), { 'a','b','c','d' });
    cout << str << endl;

    //str.erase(str.begin());
    //cout << str << endl;

    //str.erase(0, 15);
    //cout << str << endl;

    //str.erase(8);
    //cout << str << endl;

    //str.erase();
    //cout << str << endl;

    str.replace(0, 5, "Yes");
    cout << str << endl;

    cout << "Index first 'o' : " << str.find('q') << endl;
    if (str.find('q') == string::npos)
        cout << "Element not found" << endl;


    cout << "Index first 'o' : " << str.find('o') << endl;
    cout << "Index first 'o' : " << str.rfind('o') << endl;
    cout << "Index first 'o' : " << str.find_first_of("abcd") << endl;
    cout << "Index first 'o' : " << str.find_first_not_of("abcd") << endl;


    cout << "Index first 'o' : " << str.find_last_of("abcd") << endl;
    cout << "Index first 'o' : " << str.find_last_not_of("abcd") << endl;

    cout << "Substring : " << str.substr(5, 15);


}
