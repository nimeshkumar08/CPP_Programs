// Create a class Circular Queue{array, front, rear} using template,
// where member variables are protected. 
// Create a class double ended circular queue derived from circular queue.
// Derived class should contain a method bool compare(const Base &amp;)
// to compare the value (front and rear) of base class with the derived class.

#include<iostream>
#define size 5
using namespace std;
template <typename T> class Queue
{
    private:
    T *arr; int fIndex, rIndex;
    public:
    Queue(){
    arr= new T[size];
    fIndex=0;
    rIndex=0;
    }
        bool isFull(){
        return (rIndex+1)%size==fIndex;
    }
    bool isEmpty()
    {
        return rIndex=fIndex;
    }
    void enqueue(T item)
    {
    if(isFull())
    {
        cout<<"Queue is full."<<endl;
        return ;
    }
    *(this->arr + this->rIndex) = item;
    this->rIndex = (this->rIndex + 1) % size;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
            cout<<"dequeued"<<endl;
            fIndex= (fIndex+1)%size;
    }
    T front()
    {
        return isEmpty() ? NULL : *(arr + fIndex);
    }
};
int main()
{
    bool quit = false;
    Queue < int > queue;
    int temp;
    do
    {
        cout << "====================================" << endl;
        cout << "select option :" << endl;
        cout << "1 for enqueue" << endl;
        cout << "2 for dequeue" << endl;
        cout << "3 for front item" << endl;
        cout << "4 for exit" << endl;
        int ch;
        cin >> ch;
        cout << "====================================" << endl;
        switch (ch)
        {
            case 1:
            cout << "enter item to enqueue:" << endl;
            cin >> temp;
            queue.enqueue(temp);
            break;
            case 2:
            queue.dequeue();
            break;
            case 3:
            if (queue.isEmpty())
            {
                cout << "queue is empty" << endl;
            }
            else
            {
                cout << "front: " << queue.front() << endl;
            }
            break;
            case 4:
            quit = true;
            break;
            default:
            cout << "invalid selection" << endl;
            break;
        }
    } 
    while (!quit);
    return 0;
}
