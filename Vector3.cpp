#include <iostream>
using namespace std;
#include <vector>
int main()
{
tuple<int, string,int>a{1,"umesh",180};
cout<<get<0>(a)<<"\t"<<get<1>(a)<<"\t"<<get<2>(a)<<endl;
a=make_tuple(2,"kumar",185);
cout<<get<0>(a)<<"\t"<<get<1>(a)<<"\t"<<get<2>(a)<<endl;

vector<tuple<int,string,int>>v1;
cout<<"how many data do you want to insert"<<endl;
int n;
cin>>n;
int no;
string name;
int roll;
for(int i=1; i<=n; i++)
{
    cout<<"Enter your No, Name and Roll no"<<endl;
    cin>>no>>name>>roll;
    v1.push_back(make_tuple(no,name,roll));
}

for(auto p:v1)
{
    cout<<get<0>(p)<<"\t"<<get<1>(p)<<"\t"<<get<2>(p)<<endl;
}
cout<<"***************************************************************************************"<<endl;
for(int i=0; i<v1.size(); i++)
{
    cout<<get<0>(v1[i])<<"\t"<<get<1>(v1[i])<<"\t"<<get<2>(v1[i])<<endl;
}

//*****************************   Nested Vector    ****************************************************** */

}