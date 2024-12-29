#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class stack
{
    node *top;

public:
    stack()
    {
        top = NULL;
    }

    void insert(int m)
    {
        node *n = new node(m);
        if (top == NULL)
        {
            top = n;
            return;
        }

        n->next = top;
        top = n;
    }

    void pop()
    {
        top = top->next;
    }

    void display()
    {
        node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{

    stack s1;

    s1.insert(4);
    s1.insert(6);
    s1.display();

    s1.pop();

    s1.display();
}