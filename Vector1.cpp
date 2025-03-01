#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
vector<int>v(5,10);   //  5 is the size    and   10 is initial value default
v[0]=90;
v[2]=85;
cout<<v.size()<<"\t";
sort(v.begin(),v.end());
cout<<endl;
for(auto p:v)
{
    cout<<p<<"\t";
}

//   ***************************   USer input in Vector   *******************************************
cout<<endl;
vector<int>v1;
int n,b;
cout<<"how many element do you want ";
cin>>n;

for(int i=0; i<n; i++)
{
cout<<"enter value of "<<i<<" index";
cin>>b;
v1.push_back(b);
}
for(auto data:v1)
{
    cout<<data<<"\t";
}

//   *******************************   delete data from vector    ******************************************
cout<<endl;
v1.pop_back();    // delete from last 
for(auto data:v1)
{
    cout<<data<<"\t";
}

//   **********************************   Iterator   **********************************************************
/*
-> Firstly use (#include <iterator>) 

*/
cout<<endl;
vector<int>::iterator it=v1.begin();
vector<int>::iterator it1=v1.end();
v1.insert(it1-2,50);
v1.insert(it,500);
v1.insert(it+2,1000);
v1[2]=600;
for(auto data:v1)
{
    cout<<data<<"\t";
}
cout<<endl;


//************************************   Delete anywhere(Erase function)   ***************************************************** */
/*
-> Firstly use (#include <iterator>) 

*/

   cout<<"next class of vector"<<endl;
   v1.push_back(100);
   v1.push_back(200);
   v1.push_back(300);
   v1.push_back(400);
   v1.push_back(500);
   v1.push_back(600);
   vector<int>::iterator it2=v1.begin();
   v1.erase(it2);
   for(auto data:v1)
{
    cout<<data<<"\t";
}
cout<<endl;



//***********************   Searching element in vector       ********************************** */
cout<<"search element in vector"<<endl;
int x;
cout<<"enter element to search"<<endl;
cin>>x;
auto  it3=find(v1.begin(),v1.end(),x);
if(it3!=v1.end())
{
    cout<<"element found"<<endl;
}
else{
    cout<<"element not found"<<endl;
}
cout<<*it3<<endl;
v1.erase(it3);
for(auto data:v1)
{
    cout<<data<<"\t";
}

//**********************   Reverse element ********************** */

cout<<endl;
reverse(v1.begin(),v1.end());
cout<<"reverse element "<<endl;
for(auto data:v1)
{
    cout<<data<<"\t";
}
cout<<endl;

///   ***********************  Min and max element in vecor ***************************
cout<<"min element in vector"<<endl;
cout<<*min_element(v1.begin(),v1.end())<<endl;
cout<<"max element in vector"<<endl;
cout<<*max_element(v1.begin(),v1.end())<<endl;

// ******************************* check vector is empty or not **************************
cout<<"check vector is empty or not"<<endl;
if(v1.empty())
{
    cout<<"vector is empty"<<endl;
}
else{
    cout<<"Vector is not emty"<<endl;
}

//  ****************************** clear vector **********************************
cout<<"clear vector"<<endl;
v1.clear();




   

}