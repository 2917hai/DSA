#include <iostream>
using namespace std;
class stacks
{
    public: int *arr;
    int n,top;
    stacks(int s)
    {
        n=s;
        arr=new int[n];
        top=-1;
    }
    void push(int v)
    {
     if(top==n-1)
     {
         cout<<"Stack Overflow"<<endl;
         return;
     }
     else
     {
         top++;
         arr[top]=v;
     }
    }
}
int main()
{
// Stack hardcoding  

}