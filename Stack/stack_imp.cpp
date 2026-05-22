#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    // push in stack
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "stack overflow\n";
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed Element: " << arr[top] << " Sucessfully\n";
        }
    }
    // pop in stack
    void pop()
    {
        if (top == -1)
        {
            cout << "stack empty\n";
        }
        else
        {
            cout << "Poped Element: " << arr[top] << " Sucessfully\n";
            top--;
        }
    }
    // peak
    void peak()
    {
        if (top == -1)
        {
            cout << "Stack id Empty\n";
        }
        else
        {
            cout << "Top Element " << arr[top] << "\n";
        }
    }
    // empty
    void IsEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
        }
        else
        {
            cout << "Stack Is Not Empty \n";
        }
    }
};
int main()
{
    system("cls");
    Stack s(5);
    s.push(5);
    s.push(6);
    s.push(2);

    s.pop();

    s.peak();

    s.IsEmpty();
    return 0;
}