#include <iostream>
using namespace std;

class List
{
private:
	int size;
	int* arr;
public:
	int GetElementByPos(int pos)
	{
		if (size == 0) return 1;

		if (pos < 0 || pos > size)return 0; cout << "no element";

		return rand() % 10;
	}
		
};
float Divide(float a, float b)
{
	float res = 0;
	if (b == 0) {
		//cout << "Can't divide by zero!!!!" << endl;
		throw exception("Can't divide by zero!!!!");
	}
	if (b == 1)
	{
		throw 404;
	}
	if (b == 2)
	{
		throw "Can't divide by zero!!!!";
	}
	if (b == 3)
	{
		throw true;
	}
	else {
		res = a / b;
		cout << "Result : " << res << endl;
		return res;
	}
	
}
class PasswordInvalidException : public exception
{
public:
	PasswordInvalidException(const char* message) :exception(message) {}
};


class SmallPasswordException: public exception
{
	int length;
public:
	SmallPasswordException(const char* message, int length) :length(length),
		exception(message) {
	}
	void Message()
	{
		cout << what() << endl;
		cout << "Actual length : " << length << endl;
	}
};


void ValidateLogin(const char* login, const char* password)
{
	if (strlen(password) < 6)
		throw SmallPasswordException("To small password", strlen(password));

	if (!islower(password[0]) || !isalpha(password[0]))
		throw PasswordInvalidException("Password is invalid");

	if (!isupper(login[0]) || !isalpha(login[0]))
		throw exception("Incorrect login");

	cout << "Loading....................." << endl;

}

class MyArray
{
	int* arr;
	int size;
public:
	MyArray(int size = 20):size(size)
	{
		arr = new int[size] {};
	}
	void Print()const
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	int getElement(int index)
	{
		if (index >= 0 and index < size)
			return arr[index];
		else
			throw out_of_range("Index is less than 0 or more than size");
	}
	void CheckLength(int len)
	{
		if (len < 0) {
			throw length_error("Some length error");
		}
		cout << "Lenght is valid" << endl;
	}
	void SetSize(int newSize)//10  -> 5
	{
		if (newSize < 0)
			throw invalid_argument("New size is lesss than 0");
		else
		{
			int* temp = new int[newSize];
			for (int i = 0; i < size && i < newSize; i++)
			{
				temp[i] = arr[i];
			}
			delete[]arr;
			arr = temp;
			size = newSize;
		}
	}
	
};

int main()
{
	MyArray arr(10);
	arr.Print();

	try
	{
		//arr.getElement(100);
		arr.CheckLength(-10);
		//arr.SetSize(-50);
	}
	catch (out_of_range ex)
	{
		cout << ex.what() << endl;
	}
	catch (logic_error ex)
	{
		cout << ex.what() << endl;
	}
	catch (invalid_argument ex)
	{
		cout << ex.what() << endl;
	}

	




	char login[100];
	char password[100];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter login : "; cin >> login;
		cout << "Enter password : "; cin >> password;
		try
		{
			ValidateLogin(login, password);
			cout << endl;
		}		
		catch (PasswordInvalidException ex)
		{
			cout << "Invalid.....do something " << endl;
			cout << "First letter must be small. a-z, A-Z, 0-1" << endl;
			cout << ex.what() << endl;
		}
		catch (SmallPasswordException ex)
		{
			ex.Message();
			cout << "Password must have lenght more than 6 symbols " << endl;
		}
		catch (exception ex)
		{
			cout << "General error " << endl;
			cout << ex.what() << endl;
			cout << "First symbol - big letter" << endl;
		}
		catch (...)
		{
			cout << "Unknown exception" << endl;
		}
		
	}


	/*
	//try   catch throw
	float a, b;
	cout << "Enter numbers : ";
	cin >> a >> b;
	try
	{
		float res = Divide(a, b);
		cout << "Result in main: " << res << endl;
	}
	catch (exception ex)
	{
		cout << ex.what()<<endl;
	}
	catch (int ex)
	{
		cout << ex << endl;
	}
	catch (const char * ex)
	{
		cout << ex << endl;
	}
	catch (bool ex)
	{
		cout << "Bool exception" << endl;
		cout << ex << endl;
	}
	catch (...)
	{
		cout << "Unknown exception" << endl;
	}
	*/



}
