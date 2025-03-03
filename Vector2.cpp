#include <iostream>
using namespace std;
#include <vector>
// ************************************  Pair  ******************************************
/*
Pair is predefined structure template it only store two value and THe first value is accesse by first keyword and second value is acces
access by second keyword we can use make_pair() function to insert the record in a pair and we can use pair in vector
It can store only two value that means only two column
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

    //*************************************************   Touple    **************************************************** */
    /*
    WE CAN STORE MULTIPLE VALUE IN TOUPLE AND WE CAN ACCESS THE VALUE BY GET FUNCTION
    
    */
    cout<<"Touple"<<endl;
    tuple<int,string,float>t1{1,"Umesh",78.9};
    cout<<get<0>(t1)<<"\t"<<get<1>(t1)<<"\t"<<get<2>(t1)<<endl;
    t1=make_tuple(2,"Ramesh",89.9);
    cout<<get<0>(t1)<<"\t"<<get<1>(t1)<<"\t"<<get<2>(t1)<<endl;
    int rollno1;
    string name1;
    float marks;
    vector<tuple<int,string,float>>v1;
    cout<<"How many record do you want to insert"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter rollno,name and marks"<<endl;
        cin>>rollno1>>name1>>marks;
        v1.push_back(make_tuple(rollno1,name1,marks));  // Or v.push_back({rollno,name});
    }
    for(auto data:v1)
    {
        cout<<get<0>(data)<<"\t"<<get<1>(data)<<"\t"<<get<2>(data)<<endl;
    }
    // OR
    /*
    for(int i=0; i<v.size(); i++)
    {
        cout<<get<0>(v[i])<<"\t"<<get<1>(v[i])<<"\t"<<get<2>(v[i])<<endl;
    }
    
    */
}