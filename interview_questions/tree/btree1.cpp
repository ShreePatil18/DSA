#include <iostream>
using namespace std;

class tree
{
public:
    int data;
    tree *left;
    tree *right;

    tree(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(tree *&node)
{
    if (node == NULL)
    {

        return;
    }

    cout << node->data << "-->";
    preorder(node->left);
    preorder(node->right);
}

void postorder(tree *&node)
{
    if (node == NULL)
    {

        return;
    }

    postorder(node->left);
    postorder(node->right);
    cout << node->data << "-->";
}

void inorder(tree *&node)
{
    if (node == NULL)
    {

        return;
    }

    inorder(node->left);
    cout << node->data << "-->";
    inorder(node->right);
}

int depth(tree *&node)
{ 
    if (node == NULL)
    {
        return 0;
    }

    int lh = depth(node->left);
    int rh = depth(node->right);

    return 1 + max(lh, rh);
}

int countnodes(tree *&node)
{
    if (node == NULL)
    {
        return 0;
    }

    return 1 + countnodes(node->left) + countnodes(node->right);
}

int main()

{

    tree *t1 = new tree(1);
    t1->left = new tree(2);
    t1->right = new tree(3);
    t1->left->left = new tree(5);
    t1->left->right = new tree(4);

    preorder(t1);
    cout << endl;
    postorder(t1);
    cout << endl;
    inorder(t1);

    cout << endl;
    cout << depth(t1);

    cout << endl;
    cout << countnodes(t1);
}
