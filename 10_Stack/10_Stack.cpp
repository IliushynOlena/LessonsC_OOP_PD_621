#include <iostream>
using namespace std;
/*
class Stack
{
	enum { EMPTY = -1, FULL = 9 };
	int arr[FULL + 1];
	int topIndex;
public:
	//default delete
	Stack() {
		topIndex = EMPTY;
	}
	Stack(const Stack& other) = delete;
	~Stack() = default;
	bool IsFull()
	{
		return topIndex == FULL;
	}
	bool Push(int elem) {

		if (!IsFull())
		{

			arr[++topIndex] = elem;
			return true;
		}
		return false;
	}
	bool IsEmpty()
	{
		return topIndex == EMPTY;
	}

	int Pop()
	{
		if (!IsEmpty())
		{

			return arr[topIndex--];
		}
	}
	int GetCount()
	{
		return topIndex + 1;
	}
	void Clear()
	{
		topIndex = EMPTY;
	}
	int Peek()
	{
		if (!IsEmpty())
		{

			return arr[topIndex];
		}
	}
	void Print()
	{
		for (int i = 0; i <= topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

};
*/
class Stack {
private:
	enum {EMPTY = -1};
	int* arr;
	int size;
	int topIndex;
public:
	Stack() = default;
	Stack(int size):size(size)//100
	{
		arr = new int[size];
		topIndex = EMPTY;
	}
	~Stack()
	{
		if (arr != nullptr)
			delete[]arr;
	}
	bool IsFull()
	{
		return topIndex == size-1;
	}
	bool Push(int elem) {

		if (!IsFull())
		{
			arr[++topIndex] = elem;
			return true;
		}
		return false;
	}
	bool IsEmpty()
	{
		return topIndex == EMPTY;
	}
	int Pop()
	{
		if (!IsEmpty())
		{
			return arr[topIndex--];
		}
	}
	int GetCount()
	{
		return topIndex + 1;
	}
	void Clear()
	{
		topIndex = EMPTY;
	}
	int Peek()
	{
		if (!IsEmpty())
		{
			return arr[topIndex];
		}
	}
	void Print()
	{
		for (int i = 0; i <= topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	
};

int main()
{
	Stack st(15);//10
	cout << "Size = " << st.GetCount() << endl;
	for (int i = 0; i < 7; i++)
	{
		st.Push(rand() % 50);
	}
	
	cout << "Size = " << st.GetCount() << endl;
	st.Print();
	while (!st.IsEmpty())
	{
		cout << "Delete element : " << st.Pop() << endl;
		st.Print();
	}
	cout << "Size = " << st.GetCount() << endl;




}