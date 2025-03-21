#include <iostream>
using namespace std;

#include <forward_list>

int main (){

forward_list <int>f;
f.push_front(12);
f.push_front(43);
f.push_front(23);
f.push_front(100);
f.push_front(43);
forward_list <int>f2;
f.push_front(11);
f.push_front(43);
f.push_front(3);
f.push_front(7);
f.push_front(4);

for (auto p:f)
{
    cout<<p<<"\t";
}

cout<<"\n list2\n";

for (auto p:f2){
        cout<<p<<"\t";

}
f.sort();
f2.sort();
f.merge(f2);
cout<<"\n after merge\n";
for (auto p:f){
        cout<<p<<"\t";

}
f.reverse();
cout<<"\n";
for (auto p:f){
        cout<<p<<"\t";

}
f.sort();
f.unique();
cout<<"\n unique values\n";

for (auto p:f){
        cout<<p<<"\t";

}
}