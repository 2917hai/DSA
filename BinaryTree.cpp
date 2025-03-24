#include <iostream>
using namespace std;
class node   // self reference class 
{
   public:
    int data;
    node *l;
    node *r;
    public: node(int d)
    {
        data=d;
        l=NULL;
        r=NULL;
    }
};
int main()
{
     node *root=new node(10);
     root->l=new node(20);
     root->r=new node(30);
     cout<<root->l->data<<"\n";
     cout<<root->r->data<<"\n";
     cout<<root->data<<"\n"; 
}