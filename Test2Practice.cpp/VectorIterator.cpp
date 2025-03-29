#include <iostream>
using namespace std;
#include <vector>
#include <iterator>
#include <algorithm>
#include <iterator>
int main()
{
    // vector<int>v1{7,3,6,8};
    // v1.push_back(500);
    // v1.push_back(600);
    // for(auto p:v1)
    // {
    //     cout<<p;
       
    // }
    // v1.pop_back();
    // v1.pop_back();
    // for(auto p:v1)
    // {
    //     cout<<p;
       
    // }

    // vector<int>v2;
    // cout<<"enter the size of VEctor";
    // int s;
    // cin>>s;
    // int data;
    // for(int i=0; i<s; i++)
    // { 
    //     cin>>data;
    //     v2.push_back(data);
    // }
    // for(auto p:v2)
    // {
    //     cout<<p;
    // }

    // ///   sorting vector
    // sort(v2.begin(),v2.end());
    // for(auto p:v2)
    // {
    //     cout<<p;
    // }



    // vector<int>v3(5,10);
    // v3.push_back(500);
    // v3.push_back(500);
    // v3.push_back(500);
    // v3.push_back(500);
    // for(auto p:v3)
    // {
    //     cout<<p;

    // }

    // vector<int>::iterator it=v3.begin();
    // v3.insert(it+2,180);

    // for(auto p:v3)
    // {
    //     cout<<p<<"\t";

    // }
    // v3.erase(it+2);
    // for(auto p:v3)
    // {
    //     cout<<p<<"\t";

    // }


    vector<int>v4;
    cout<<"enter the size of vector";
    int size;
    int d;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"enter the value of "<<i<<"  index data "<<endl;
        cin>>d;
        v4.push_back(d);
    }
    for(auto p:v4)
    {
        cout<<p<<"\t";

    }
    cout<<"sort data :"<<endl;
    sort(v4.begin(),v4.end());
    for(auto p:v4)
    {
        cout<<p<<"\t";

    }

    cout<<"searching data from vector"<<endl;
    int sdata;
    cout<<"enter data which you want to search"<<endl;
    cin>>sdata;
     auto ssdata=find(v4.begin(),v4.end(),sdata);
     if(ssdata!=v4.end())
     {
        cout<<"data found"<<endl;
     }
     else
     {
        cout<<"data not found"<<endl;
     }

     cout<<"data reverse "<<endl;
     reverse(v4.begin(),v4.end());
     for(auto p:v4)
     {
         cout<<p<<"\t";
 
     }

     cout<<"min and max data of vector "<<endl;
     cout<<*min_element(v4.begin(),v4.end());
     cout<<*max_element(v4.begin(),v4.end());


     cout<<"vector is empty or not"<<endl;
     if(v4.empty())
     {
        cout<<"vector is empty"<<endl;
     }
     else
     {
        cout<<"data is not empty"<<endl;
     }




    
}