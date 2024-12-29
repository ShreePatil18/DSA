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

void insert(node *&head, int m)
{
    node *n = new node(m);

    // if (head == NULL)
    // {
    //     head = n;
    //     n->next = head;
    //     return;
    // }
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void display(node *&head)
{
    node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    node *head = NULL;

    insert(head, 8);
    insert(head, 7);
    insert(head, 10);
    insert(head, 3);

    display(head);
}