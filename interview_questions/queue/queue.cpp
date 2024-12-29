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

class queue
{
    node *first;
    node *last;
    int len;

public:
    queue()
    {
        first = NULL;
        last = NULL;
        len = 0;
    }

    void insert(int m)
    {
        node *n = new node(m);
        if (first == NULL)
        {
            first = n;
            last = n;
            len++;
            return;
        }
        last->next = n;
        last = n;
        len++;
    }

    void pop()
    {
        first = first->next;

        len--;
    }

    void display()
    {
        node *temp = first;
        while (temp <= last)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{

    queue q;
    q.insert(8);
    q.insert(4);
    q.insert(2);
    q.pop();
    q.display();
}