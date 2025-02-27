/*
Vector-:
      -> Include vector   (#include <vector>).
      ->  Vector is dynamic while array is static.
      -> We can override the value in vector
      -> capacity and size will be same in static data collection
      -> In dynamic case Capacity being double and capacity are same untill all memory fully covered

*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{


/*==========================================    Static  data   ==========================================*/


vector<int>v2{4,2,1};
v2[2]=100;
v2.push_back(110);
v2.push_back(120);
v2.push_back(130);
cout<<v2.size()<<endl;
for(auto p:v2)
{
    cout<<p<<"\t";
}
cout<<"Capacity :"<<v2.capacity()<<endl;




/*==========================================    Dynamic  data   ==========================================*/

vector<int>v;
cout<<v.size()<<endl;
v.push_back(110);
v.push_back(120);
v.push_back(130);
v.push_back(140);
v.push_back(150);
cout<<v.size()<<endl;
for(auto p:v)
{
    cout<<p<<"\t";
}
cout<<"Capacity :"<<v.capacity()<<endl;

}