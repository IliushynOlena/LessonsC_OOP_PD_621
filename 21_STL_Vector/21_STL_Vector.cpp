#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<int> v1, vector<int> v2)
{
	cout << "Vector 1 : ";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	cout << "Vector 2 : ";
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;
	cout << endl;
}


struct Time
{
	int h, m, s;
};
class Train
{
	int number;
	Time departureTime;
	string destination;
};
class Railway
{
	vector<Train> trains;
	void AddTraint(Train t)
	{
		trains.push_back(t);
	}
};

int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int>v2 = { 10,11,12,13,14 };

	vector<int>::iterator pointer_start = v.begin();
	vector<int>::iterator pointer_end = v.end();

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " "; //v[i] = 0;
	}
	cout << endl;
	v[0] = 55;
	for (auto item : v)
	{
		cout << item << " ";
		item = 0;
	}
	cout << endl;
	
	cout << endl;
	int a = 5;
	auto b = 6;
	auto c = 3.33;
	float d = 1.25;
	int o;
	auto p = 'c';

	//v.begin() - address first element
	//v.end() - address first empty element

	//erase - delete element by address
	PrintVector(v, v2);
	v.erase(v.begin());
	PrintVector(v, v2);
	v.erase(v.begin()+2);
	PrintVector(v, v2);
	v.erase(v.end()-1);
	PrintVector(v, v2);
	cout << "Size : " << v.size() << endl;
	cout << "Capacity : " << v.capacity() << endl;
	v.erase(v.begin(), v.end() - 4);
	PrintVector(v, v2);

	//insert - add element by position
	v.insert(v.begin(), 55);
	PrintVector(v, v2);
	v.insert(v.end(), { 7,8,9,10 });

	cout << "Size : " << v.size() << endl;
	cout << "Capacity : " << v.capacity() << endl;
	PrintVector(v, v2);
	v.insert(v.begin() + 2, 5, 44);
	PrintVector(v, v2);
	cout << "Size : " << v.size() << endl;
	cout << "Capacity : " << v.capacity() << endl;

	v.insert(v.end(), v2.begin() + 1, v2.end() - 2);
	PrintVector(v, v2);

	//add element to the end
	v.push_back(444);
	v.push_back(444);
	v.push_back(444);
	v.push_back(444);
	PrintVector(v, v2);

	v.pop_back();
	v.pop_back();
	PrintVector(v, v2);

	//v.swap(v2);
	//PrintVector(v, v2);

	cout << "Show first element : " << v.front() << endl;
	cout << "Show last element : " << v.back() << endl;

	cout << "Size : " << v.size() << endl;
	cout << "Capacity : " << v.capacity() << endl;
	//v.resize(70);
	//v.resize(70, 5);
	v.resize(5);
	v.push_back(444);
	v.push_back(444);
	PrintVector(v, v2);


	v.shrink_to_fit();
	cout << "Size : " << v.size() << endl;
	cout << "Capacity : " << v.capacity() << endl;

	v[5] = 7;
	v.push_back(444);
	v.push_back(444);
	PrintVector(v, v2);
	cout << "Size : " << v.size() << endl;
	cout << "Capacity : " << v.capacity() << endl;

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 7) {
			v.insert(v.begin() + i + 1, 77);
		}
	}
	PrintVector(v, v2);



}

