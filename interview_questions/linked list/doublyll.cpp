#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insert_head(node *&head, int m)
{
    node *n = new node(m);
    if (head == NULL)
    {
        head = n;
        return;
    }

    // important
    n->next = head;
    head->prev = n;
    head = n;
}
void insert(node *&head, int m)
{
    node *n = new node(m);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void del(node *&head, int m)
{
    node *temp = head;

    while (temp->data != m)
    {
        temp = temp->next;
    }

    node *todel = temp;

    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;

    delete todel;
}

void insert_btw(node *head, int k, int m)
{
    node *temp = head;
    node *n = new node(m);
    while (k > 0)
    {
        temp = temp->next;
        k--;
    }

    temp->prev->next = n;
    n->prev = temp->prev;
    n->next = temp;
    temp->prev = n;

    // n->next = temp->next;
    // temp->next->prev = n;
    // temp->next = n;
    // n->prev = temp;
}
int main()
{

    node *head = NULL;

    insert(head, 8);
    insert(head, 7);
    insert(head, 10);
    insert(head, 3);
    insert_head(head, 33);

    display(head);

    del(head, 10);
    cout << "del";
    display(head);

    insert_btw(head, 3, 20);

    display(head);
}
