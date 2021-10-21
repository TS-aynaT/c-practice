#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
};

node* newNode(int value)
{
    node* Node=new node();
    Node->data= value;
    Node->left=NULL;
    Node->right=NULL;
}

int height(node* root)
{
 if(root==NULL)
 return 0;
 
 int left = height(root->left);
 int right = height(root->right);
 
 return 1+ max(left,right);
}
int main()
{
    node* root = newNode(5);
    root->left=newNode(4);
    root->right=newNode(3);
    root->left->left=newNode(2);
    root->right->right=newNode(1);
    
   cout<<height(root);

    return 0;
}
