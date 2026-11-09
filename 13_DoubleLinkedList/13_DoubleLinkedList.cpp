#include <iostream>
using namespace std;

template<typename T>
class List
{
    struct Node 
    {
        Node* prev;
        T value;
        Node* next;
        Node():prev(nullptr),value(0),next(nullptr){}
        Node(Node *p, T v, Node *n):prev(p),value(v),next(n){}       
    };

private:
    Node* head;
    Node* tail;
public:
    List()
    {
        head = tail = nullptr;
    }
    bool IsEmpty()const
    {
        return head == nullptr;
    }
    void AddToHead(T value)
    {
        Node* newNode = new Node(nullptr, value, head);

        if (IsEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            head->prev = newNode;
            head = newNode;
        }    
    }
    void Print()
    {
		//Node* current = head;//int i = 0
		//while (current != nullptr)// i < 10
		//{
		//	cout << current->value << " ";
		//	current = current->next;// i++
		//}
		//cout << endl;
        for (Node* i = head; i != nullptr; i = i->next)
        {
            cout << i->value << " ";
        }
        cout << endl;
    }
    ~List()
    {
        Node* current = nullptr;
        while (head != nullptr)
        {
            current = head;
            head = head->next;
            delete current;
        }
    }
    void AddToTail(T value) 
    {
        Node* newNode = new Node(tail, value, nullptr);
        if (IsEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }       
    
    }
    void DeleteFromHead(){}
    void DeleteFromTail() 
    {
        if (IsEmpty())return;
        if (tail->prev == nullptr)
        {
            delete head;
            head = tail = nullptr;
        }
        else {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
      
    }

};


class Train
{
    struct Vagon {

    };

    string model;
    List<Vagon> vagons;
    int countVagons;
    void AddVagonToTail(Vagon v)
    {
        
    }
};
int main()
{
    List<int> l;
   /* for (int i = 0; i < 10; i++)
    {
        l.AddToHead(i);
    }
    l.Print();*/
    l.AddToTail(100);
    l.AddToTail(200);
    l.AddToTail(300);
    l.Print();
    l.DeleteFromTail();
    l.Print();
    l.DeleteFromTail();
    l.Print();
    l.DeleteFromTail();
    l.Print();
}

