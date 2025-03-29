#include <iostream>
using namespace std;
class node
{
    public:
 int data;
 node*left;
 node*right;

 node(int d)
 {
    
    data=d;
    left=NULL;
    right=NULL;
 }
};
 node *create(node *root,int v)
 {
    if(root==NULL)
    {
        return new node(v);
    }
    if(v<root->data)
    {
        root->left=create(root->left,v);
    }
    else
    {
        root->right=create(root->right,v);
    }

 }
 void inorder(node *root)
 {
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\n";
    inorder(root->right);
 }


int main()
{
node *root=NULL;
int n,val;
cout<<"how many data \n";
cin>>n;
for(int i=1; i<=n; i++)
{
    cin>>val;
    root=create(root,val);
}
cout<<"inorder"<<endl;
inorder(root);

}