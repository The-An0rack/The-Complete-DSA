#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void pre_order(struct node* temp)
{
    if(temp == NULL)
        return;

    cout << temp->data<<" ";
    pre_order(temp->left);
    pre_order(temp->right);
}

void in_order(struct node* temp)
{
    if(temp == NULL)
        return;

    in_order(temp->left);
    cout << temp->data<<" ";
    in_order(temp->right);
}

void post_order(struct node* temp)
{
    if(temp == NULL)
        return;

    post_order(temp->left);
    post_order(temp->right);
    cout << temp->data<<" ";
}


int main()
{
    //Creating Tree
    //      1
    //    /   \
    //   2     3
    //  / \   / \
    // 4   5 6   7

    struct node* root= new node(1);
    root -> left = new node(2);
    root -> right = new node(3);
    root ->left -> left = new node(4);
    root ->left -> right = new node(5);
    root ->right -> left = new node(6);
    root ->right -> right = new node(7);

    cout << "P re-order Traversal: ";
    pre_order(root);
    cout << endl;
    cout << "In-order Traversal: ";
    in_order(root);
    cout << endl;
    cout << "Post-order Traversal: ";
    post_order(root);
    cout << endl;


    return 0;
}
