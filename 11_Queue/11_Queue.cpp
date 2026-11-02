
#include <iostream>
#include <conio.h>
using namespace std;

class Queue
{
    //FIFO        
    int* arr;
    int maxSize;//100   capacity
    int topIndex;
public:
    Queue() = default;
    Queue(int max_size)
    {
        this->maxSize = max_size;
        arr = new int[maxSize];//100
        topIndex = 0;
    }
    ~Queue()
    {
        if (arr != nullptr)
            delete[]arr;
    }
    bool IsFull()const
    {
        return topIndex == maxSize;
    }
    void Enqueue(int elem)
    {
        if (!IsFull())
        {
            arr[topIndex++] = elem;
          
        }
    }
    bool IsEmpty()const
    {
        return topIndex == 0;
    }
    /*int Dequeue()//queue 
    {
        if (!IsEmpty())
        {
            int first = arr[0];
            for (int i = 0; i < topIndex; i++)
            {
                arr[i] = arr[i + 1];
            }
            topIndex--;
            return first;
        }
    }*/
    int Dequeue()//queue cycle
    {
        if (!IsEmpty())
        {
            int first = arr[0];
            for (int i = 0; i < topIndex; i++)
            {
                arr[i] = arr[i + 1];
            }
            arr[topIndex-1] = first;
            return first;
        }
    }
    int GetCount()const
    {
        return topIndex;
    }
    void Clear()
    {
        topIndex = 0;
    }
    void Show()const
    {
        for (int i = 0; i < topIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main()
{
    Queue q(15);
    for (int i = 0; i < 10; i++){
        q.Enqueue(rand() % 50);
    }
    q.Show();
    cout << "Size : " << q.GetCount() << endl;
    while (!q.IsEmpty())
    {
        cout << "Delete element : " << q.Dequeue() << endl;
        cout << "Size : " << q.GetCount() << endl;
        q.Show();
        cout << endl;
        _getch();
        system("cls");
    }


}

