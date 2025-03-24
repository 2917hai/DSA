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
node* builtTree(node* root)
{
    cout<<"enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"enter the data for inserting in left of "<<data<<endl;
    root->left=builtTree(root->left);
    cout<<"enter data for inserting in right of "<<data<<endl;
    root->right=builtTree(root->right);
    return root;
}
int main()
{
    node* root=NULL;
    root=builtTree(root);

}