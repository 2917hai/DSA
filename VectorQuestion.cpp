#include <iostream>
using namespace std;
#include <vector>
int main()
{                
    vector<int>v1;
    vector<int>v2;
    int x;
    int y;
    int n;
    int m;
    cout<<"enter the size of vector1"<<endl;
    cin>>n;
    cout<<"enter the size of vector2"<<endl;
    cin>>m;
    cout<<"enter the value of v1"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    cout<<"enter the value of v2"<<endl;
    for(int i=0; i<m; i++)
    {
        cin>>y;
        v2.push_back(y);
    }
    int a=0;
    int b=0;
    for(int i=0; i<v1.size(); i++)
    {
       a=a*10+v1[i];
    }
    for(int i=0; i<v1.size(); i++)
    {
       b=b*10+v2[i];
    }
    cout<<a+b<<endl;

   
}