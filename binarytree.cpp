#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTree(Node* root)
{
    int d;
    cout<<"enter the data "<<endl;
    cin>>d;
    root=new Node(d);

    if(d==-1)
    {
        return NULL;
    }

    cout<<"enter the data for insertion at the left of"<<d<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the data for insertion at the right of"<<d<<endl;
    root->right=buildTree(root->right);
    return root;
}
Node* buildfromLevelOrder(Node* root)
{
    queue<Node*> q;
    int rd;
    cout<<"enter the data for root node"<<endl;
    cin>>rd;
    root=new Node(rd);
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
         int leftd;
         cout<<"enter the data for left node\t"<<temp->data<<endl;
         cin>>leftd;
         if(leftd != -1)
         {
             temp->left=new Node(leftd);
             q.push(temp->left);
         }
        int rightd;
        cout<<"enter the data for right node\t"<<temp->data<<endl;
        cin>>rightd;
        if(rightd != -1)
        {
            temp->right=new Node(rightd);
            q.push(temp->right);
        }
    }
    return root;
}
void LevelOrderTraversal(Node* root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    { Node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(void)
{
    Node* root=NULL;
    root=buildfromLevelOrder(root);
    LevelOrderTraversal(root);
    preorder(root);
}
