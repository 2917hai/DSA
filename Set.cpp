#include <iostream>
using namespace std;
#include <set>
int main()
{
    set<int> s; // not allow duplicate value and store in sorted order and follow self balance binary tree And support complex datatype and store in sequential way 
    //   set for graph and map for tree
    s.insert(10);
    s.insert(20);
    s.insert(90);
    s.insert(100);
    s.insert(110);
    s.insert(320);
    s.insert(330);
    s.insert(340);
   
    for(auto p:s)
    {
        cout<<p<<endl;
    }
    // searching element in set
    auto it=s.find(90);

    // delete element from set
    // s.erase(90);
    s.erase(it);
    for(auto p:s)
    {
        cout<<p<<endl;
    }

    // check if set is empty or not
    if(s.empty())
    {
        cout<<"Set is empty"<<endl;
    }
    else
    {
        cout<<"Set is not empty"<<endl;
    }



    // size of set
    cout<<"Size of set is : "<<s.size()<<endl;


    // clear the set
    s.clear();
    for(auto p:s)
    {
        cout<<p<<endl;
    }



    

}