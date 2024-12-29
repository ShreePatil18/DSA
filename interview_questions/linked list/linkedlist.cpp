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

void del(node *&head, int del)
{
    node *temp = head;
    while (temp->next->data != del)
    {
        temp = temp->next;
    }

    node *todel = temp->next;

    temp->next = temp->next->next;
    delete todel;
}

void middle(node *&head)
{
    node *fst = head;
    node *slw = head;

    while (fst != NULL && fst->next != NULL)
    {
        fst = fst->next->next;
        slw = slw->next;
    }

    cout << slw->data << endl;
}

void reverse(node *&head)
{
    node *curr = head;
    node *nxt = NULL;
    node *prev = NULL;

    while (curr != NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }

    head = prev;
}

bool detectloop(node *&head)
{
    node *fst = head;
    node *slw = head;

    while (fst && slw && fst->next)
    {
        if (slw == fst)
        {
            return true;
        }
    }

    return false;
}
int main()

{

    node *head = NULL;

    insert(head, 8);
    insert(head, 7);
    insert(head, 10);
    insert(head, 3);
    del(head, 7);
    display(head);
    middle(head);

    reverse(head);
    display(head);

    head->next->next = head;
    cout << detectloop(head);
}