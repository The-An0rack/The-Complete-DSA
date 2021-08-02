#include<iostream>
#include<queue>

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

void level_order_traversal(struct node* root)
{
    if(root == NULL)
        return;

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        struct node* node_ = q.front();
        q.pop();
        if(node_ != NULL)
        {
            cout << node_ -> data << " ";
            if(node_ -> left)
                q.push(node_ -> left);
            if(node_ -> right)
                q.push(node_ -> right);
        }

        else if(!q.empty())
            q.push(NULL);
    }

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

    cout << "Level Order Traversal: ";
    level_order_traversal(root);
    return 0;
}
