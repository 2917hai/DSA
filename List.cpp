//ankit parmar 

#include <iostream>
#include <list>

using namespace std;
int main (){

list <int>L1;
L1.push_front (10);
L1.push_front (3);
L1.push_front (90);
L1.push_back (70);

L1.push_front (300);
for (auto p:L1)
{

    cout<<p<<"\t";
}
L1.pop_back ();

cout<<"after deletion\n";
for (auto p:L1)
{

    cout<<p<<"\t";
}


}