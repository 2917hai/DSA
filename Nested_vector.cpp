#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<vector<int>>v1; 
    int row,colom,v;
    cout<<"enter the no of row"<<endl;
    cin>>row;
    cout<<"enter the no of colom"<<endl;
    cin>>colom;
    for(int i=0; i<row; i++)
    {
        vector<int>v2;
        for(int j=0; j<colom; j++)
        {
            cout<<"enter value"<<endl;
            cin>>v;
            v2.push_back(v);
        }
        v1.push_back(v2);
    }
    for(int i=0; i<v1.size(); i++)
    {
        for(int j=0; j<v1[i].size(); j++)
        {
            cout<<v1[i][j]<<"\t";
        }
        cout<<endl;
    }

}