#include <iostream>
using namespace std;
#include <map>
int main()
{
map<int,string> mp;
int roll,n;
string name;
cout<<"Enter the number of students"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"Enter the roll number of student"<<endl;
    cin>>roll;
    cout<<"Enter the name of student"<<endl;
    cin>>name;
    // mp[roll]=name;
    // mp.insert({roll,name});
    mp.insert(make_pair(roll,name));
}
for(auto x:mp)
{
    cout<<x.first<<" "<<x.second<<endl;

}
//search
cout<<"Enter the roll number to search"<<endl;
cin>>roll;
auto k=mp.find(roll);
if(k!=mp.end())
{
    cout<<"Roll number found"<<endl;
    cout<<k->first<<" "<<k->second<<endl;
}
else
{
    cout<<"Roll number not found"<<endl;
}
//delete
cout<<"Enter the roll number to delete"<<endl;
cin>>roll;
mp.erase(roll);
for(auto x:mp)
{
    cout<<x.first<<" "<<x.second<<endl;
}
//update
cout<<"Enter the roll number to update"<<endl;
cin>>roll;
cout<<"Enter the new name"<<endl;
cin>>name;
mp[roll]=name;
for(auto x:mp)
{
    cout<<x.first<<" "<<x.second<<endl;

}
}