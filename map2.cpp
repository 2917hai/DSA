#include <iostream>
using namespace std;
#include <map>

/*
Ordered map and Unorederd map 
in orederd map data are store in a sequential way and support complex datatype and follow self balance binary tree
*/
int main()
{
    multimap<int,string>multi;   // multi map allow duplicate value
    multi.insert({1, "Geeks for"});
    multi.insert({2, "for"});
    multi.insert({3, "Geeks"});
    multi.insert({3, "Geeks"});
    multi.insert({4, "for"});
    for(auto p:multi)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    auto it=multi.find(3);
    if(it!=multi.end())
    {
        cout<<"Found"<<endl;

        // multi.erase(3);
        // for(auto p:multi)
        // {
        //     cout<<p.first<<" "<<p.second<<endl;
        // }
    // OR     delete by iterator all data delte which have key 3
        multi.erase(it);
        for(auto p:multi)
        {
            cout<<p.first<<" "<<p.second<<endl;
        }
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
  
}
