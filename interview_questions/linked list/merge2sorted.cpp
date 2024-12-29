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

node *merge(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }

    if (head2 == NULL)
    {
        return head1;
    }

    node *t1 = head1;
    node *t2 = head2;

    while (t1->next != NULL && t2->next != NULL)
    {
        if (t1->data < t2->data)
        {
            t1 = t1->next;
        }
        else
        {
            t1 = t1->next;
        }
    }

    return t1;
}

int main()

{

    node *head = NULL;
    node *head2 = NULL;
    insert(head, 1);
    insert(head, 3);
    insert(head, 4);
    insert(head, 6);

    insert(head, 2);
    insert(head, 5);
    insert(head, 6);
    insert(head, 8);

    node *ans = merge(head, head2);

    display(ans);
}