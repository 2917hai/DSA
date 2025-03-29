#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <iterator>
int main()
{
    tuple<int, string,double>data{1,"Umesh",89.40};
    cout<<get<0>(data)<<"\t"<<get<1>(data)<<"\t"<<get<2>(data)<<endl;
    data=make_tuple(2,"Kumar",91.60);
    data=make_tuple(3,"yadav",76.50);

    cout<<get<0>(data)<<"\t"<<get<1>(data)<<"\t"<<get<2>(data)<<endl;

    vector<tuple<int, string,double>>data1;
    int roll;
    string name;
    double marks;
    cout<<"how many data do you want to add "<<endl;
    int no;
    cin>>no;
    for(int i=1; i<=no; i++)
    {
        cout<<"enter roll name and marks"<<endl;
        data1.push_back(make_tuple(roll,name,marks));
    }
    for(auto a:data1)
    {
        cout<<get<0>(a)<<"\t"<<get<1>(a)<<"\t"<<get<2>(a)<<endl;
    }
    
}