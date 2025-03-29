#include <iostream>
using namespace std;
#include <list>
#include <forward_list>
int main()
{
    // list<int>l1;
    // l1.push_front(10);
    // l1.push_front(20);
    // l1.push_front(30);
    // for(auto p:l1)
    // {
    //     cout<<p<<"\t";
    // }
    // cout<<endl;
    // l1.pop_back();
    // for(auto p:l1)
    // {
    //     cout<<p<<"\t";
    // }
    // cout<<endl;
    // l1.push_front(100);
    // l1.push_front(200);
    // l1.push_front(300);
    // for(auto p:l1)
    // {
    //     cout<<p<<"\t";
    // }
    // cout<<endl;
    // l1.pop_front();
    // for(auto p:l1)
    // {
    //     cout<<p<<"\t";
    // }
    // l1.sort();
    // for(auto p:l1)
    // {
    //     cout<<p<<"\t";
    // }

    // cout<<endl;
    // list<int>l2;
    // l2.push_front(1);
    // l2.push_front(2);
    // l2.push_front(3);
    // l2.push_front(4);
    // l2.push_front(5);
    // l2.push_front(6);
    // cout<<endl;
    // for(auto p:l2)
    // {
    //     cout<<p<<"\t";
    // }
    // l1.merge(l2);
    // for(auto p:l1)
    // {
    //     cout<<p<<"\t";
    // }

    list<int>f;
    f.push_front(12);
f.push_front(43);
f.push_front(23);
f.push_front(100);
f.push_front(43);
f.push_back(50);
for (auto p:f)
{
    cout<<p<<"\t";
}

    
}