#include <iostream>
#include <vector>
#include <map>
using namespace std;

//template<typename T>
/*
int GetMax(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
short GetMax(short arr[], int size)
{
	short max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
long GetMax(long arr[], int size)
{
	long max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
*/
template<typename T>
T GetMax(T arr[], int size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}


template<typename T_coll, typename T_value>
class MyClass 
{
	T_coll* collection;
	int size;

	T_value value;
public:
	MyClass() :collection(nullptr), size(0) {}
	MyClass(T_coll * coll,int size, T_value p) :collection(coll), size(size), value(p) {}
	~MyClass()
	{
		if (collection != nullptr)
			delete[]collection;
	}
	void SetCollection(T_coll* coll);
	void SerValue(T_value value)
	{
		this->value = value;
	}
	void Print()
	{
		cout << "Size = " << size << endl;
		for (int i = 0; i < size; i++)
		{
			cout << collection[i] << " ";
		}
		cout << endl;
		//cout << value << endl;
	}
};


template<typename T_coord>
class Point
{
	T_coord x;
	T_coord y;
public:
	Point()
	{
		x = y = 0;
	}
	explicit Point(T_coord value)
	{
		this->x = value;
		this->y = value;
	}
	Point(T_coord x, T_coord y)
	{
		this->x = x;
		this->y = y;
	}
	void Print()const
	{
		cout << "X : " << x << " . Y : " << y << endl;
	}
	void SetNewCoords(T_coord newX, T_coord newY)
	{
		x = newX;
		y = newY;
	}
};

template<typename T_X, typename T_Y>
class NewPoint
{
	T_X x;
	T_Y y;
public:
	NewPoint()
	{
		x = y = 0;
	}
	NewPoint(T_X x, T_Y y)
	{
		this->x = x;
		this->y = y;
	}
	void Print()const;
	void SetNewCoords(T_X newX, T_Y newY)
	{
		x = newX;
		y = newY;
	}
};
class User
{

};

class Array
{
	int* arr;
	int size;
public:
	Array()
	{
		size = 0;
		arr = nullptr;
	}
	explicit Array(int size)
	{
		this->size = size;
		arr = new int[size] {};
		
	}
	Array(initializer_list<int> list)
	{
		this->size = list.size();
		this->arr = new int[size];
		int i = 0;
		for (int elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}
	void Fill(initializer_list<int> list)
	{
		if (arr != nullptr)
			delete[]arr;
		this->size = list.size();
		this->arr = new int[size];
		int i = 0;
		for (int elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}
	~Array()
	{
		if (arr != nullptr)
			delete[]arr;
	}
	
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}


};
int main()
{

	int static_arr[5] = { 1,2,3,4,5 };
	int* dynam_arr = new int[5] {5, 4, 3, 2, 1};


	Array arr(10);
	arr.Print();

	Array arr2({ 4, 7, 8, 9, 6, 5, 2, 6, 55, 44, 22, 333,77,88,55,66 });
	arr2.Print();

	arr2.Fill({ 3,2,1 });
	arr2.Print();
	delete[] dynam_arr;
	/*
	Point<int> p1(5, 7);
	p1.Print();

	Point<float> p2(3.33, 4.25);
	p2.Print();
	p2.SetNewCoords(5.56, 7.22);
	p2.Print();



	Point<string> p3("one", "four");
	p3.Print();
	p3.SetNewCoords("three", "five");
	p3.Print();

	NewPoint<float, int> p4(5.24, 100);
	p4.Print();
	p4.SetNewCoords(7.77, 777);
	p4.Print();

	vector<int> v1 = { 1,2,3,4,5 };

	vector<float> v2 = { 1.1,2.2,3.3,4.4,5.5 };
	v2.push_back(3.33);

	vector<string> v3 = { "red", "green", "blue" };
	v3.push_back("kfdjgkdf");

	vector<User> v4 = {User(), User(), User()};
	v4.push_back(User());

	map<string, int> m1;
	*/
	/*
	long* long_arr = new long[5];
	for (int i = 0; i < 5; i++)
	{
		long_arr[i] = i + 1; 
		cout << long_arr[i] << " ";
	}
	cout << endl;
	char* char_arr = new char[5];
	for (int i = 0; i < 5; i++)
	{
		char_arr[i] = 'a' + i;
		cout << char_arr[i] << " ";
	}
	cout << endl;
	
	MyClass<long,string> cl1(long_arr, 5, "Class with long arr");
	MyClass<char,string> cl2(char_arr, 5, "Class with char arr");

	cl1.Print();
	cl2.Print();
	
	*/
	/*
	delete[] long_arr;
	delete[] char_arr;*/
	
	
	/*
	const int size = 10;
	int arr1[size] = { 5,77,3,6,98,5,2,45,63,25 };
	short arr2[size] = { 5,77,3,6,98,5,2,45,63,25 };
	long arr3[size] = { 5,77,3,6,98,5,2,45,63,25 };
	string colors[6] = { "red","green","yellow","blue","pink", "purple" };
	string names[6] = { "Inna","Zina","Oleksandr","Mukola","Ivan","Olena" };
	cout << "Max element : " << GetMax(arr1, size) << endl;
	cout << "Max element : " << GetMax(arr2, size) << endl;
	cout << "Max element : " << GetMax(arr3, size) << endl;
	cout << "Max element : " << GetMax(colors, 6) << endl;
	cout << "Max element : " << GetMax(names, 6) << endl;*/




}

template<typename T_coll, typename T_value>
 void MyClass<T_coll, T_value>::SetCollection(T_coll* coll)
{
	this->collection = coll;
}

 template<typename T_X, typename T_Y>
 void NewPoint<T_X, T_Y>::Print() const
 {
	 cout << "X : " << x << " . Y : " << y << endl;
 }
