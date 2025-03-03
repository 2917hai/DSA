#include <iostream>
using namespace std;
#include <vector>
// ************************************  Pair  ******************************************
/*
Pair is predefined structure template it only store two value and THe first value is accesse by first keyword and second value is acces
access by second keyword we can use make_pair() function to insert the record in a pair and we can use pair in vector
*/
int main()
{
    pair<int,string >p1{1,"Umesh"};
    cout<<p1.first<<"\t"<<p1.second<<endl;
    p1=make_pair(2,"Ramesh");
    cout<<p1.first<<"\t"<<p1.second<<endl;
    
    vector<pair<int,string>>v;
    int rollno,n;
    string name;
    cout<<"How many record do you want to insert"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter rollno and name"<<endl;
        cin>>rollno>>name;
        v.push_back(make_pair(rollno,name));  // Or v.push_back({rollno,name});
    }
    for(auto data:v)
    {
        cout<<data.first<<"\t"<<data.second<<endl;
    }
    // OR
    /*
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<"\t"<<v[i].second<<endl;
    }
    
    */
}