#include <iostream>
using namespace std;
class node   // self reference class 
{
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
     
}