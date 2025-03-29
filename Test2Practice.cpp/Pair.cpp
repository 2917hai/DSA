#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
#include <algorithm>
int main()
{
   
    pair<int,string>p1{1,"Umesh"};
    p1=make_pair(2,"Kumar");
    p1=make_pair(3,"yadav");
    cout<<p1.first<<" "<<p1.second<<endl;

   

    vector<pair<int,string>>p2;
    cout<<"how many data do you want to insert"<<endl;
    int n;
    int roll;
    string name;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter roll and name"<<endl;
        cin>>roll>>name;
        p2.push_back(make_pair(roll,name));

    }
    for(auto a:p2)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }

    p2.pop_back();
    for(auto a:p2)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }


cout<<"/////////////////////////////////////////////////////";
    vector<pair<int,string>>::iterator it=p2.begin();
    p2.insert(it+2,make_pair(2,"Munesh"));
    for(auto a:p2)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }
    cout<<"/////////////////////////////////////////////////////"<<endl;
    p2.erase(it+2);
    for(auto a:p2)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }

    cout<<"//////////////////////////////////////////////"<<endl;

    int nroll;
    string nname;
    cout<<"enter roll and name which you want to search"<<endl;
    cin>>nroll>>nname;
    auto data=find(p2.begin(),p2.end(),nroll);
    



}