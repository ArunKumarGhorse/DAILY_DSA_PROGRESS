#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size, front, rear;
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = -1;
        rear = -1;
    }

    // Empty
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
            return false;
    }
    // Full
    bool isFull()
    {
        if (rear == size - 1)
        {
            return true;
        }
        else
            return false;
    }
    // Insertion
    void push(int x)
    {
        if (isFull())
        {
            cout << "Queue is Full";
        }
        else if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }
        else
        {
            rear++;
            arr[rear] = x;
        }
    }
    // Delete
    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty";
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
    // front element
    void fr()
    {
        if (!isEmpty())
        {
            cout << "\n"
                 << arr[front];
        }
        else
        {
            cout << "Queue is Empty";
        }
    }
};
int main()
{
    int n = 5;
    Queue q(n);
    cout << q.isEmpty() << endl;
    cout << q.isFull() << endl;
    q.push(1);
    q.push(2);

    q.fr();

    q.pop();

    q.fr();
    return 0;
}