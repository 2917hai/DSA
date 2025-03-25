//  dynamic binary tree
#include <iostream>
using namespace std;
class node
{
public:
int data;
node *left;
node *right;

node(int d)
{
    data=d;
    left=NULL;
    right=NULL;
}
};
void preorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{  
    if(root==NULL)
    {
        return;
    }
  
    preorder(root->left);
    cout<<root->data<<"\t";
    preorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
  
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<"\t";
}
node *create(node* root)
{
    int d;
    cout<<"enter value \n";
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"enter value for left "<<d<<"\n";
    root->left=create(root->left);
    cout<<"enter value for right "<<d<<"\n";
    root->right=create(root->right);


}
int main()
{
   
    node *root=NULL;
    root=create(root);
    preorder(root);
    inorder(root);
    postorder(root);

}