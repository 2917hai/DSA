#include <iostream>
using namespace std;

void show(int a)
{
    if(a==0)
    {
        return;
    }
 cout<<a<<"\t";   // (5,4,3,2,1)
 show(a-1);
  cout<<"\n"<<a<<"\t";  // (1,2,3,4,5 )
}
int main()
{
    show(5);
}