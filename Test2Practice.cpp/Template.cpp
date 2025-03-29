#include <iostream>
using namespace std;
#include <array>
#include <algorithm>
int main()
{
    array<int,5>arr{20,50,10,30,40};
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<"\t";
        cout<<arr.at(i)<<"\t";
    }
    for(auto p:arr)
    {
        cout<<p<<"\t";
    }
  array<double,5>arr1;
  cout<<"enter the value of arr1"<<endl;
  for(int i=0; i<arr1.size(); i++)
  {
    cin>>arr1[i];
  }
  for(auto a:arr1)
  {
    cout<<a<<"\t";
  }
  cout<<arr1.front()<<endl;
  cout<<arr1.back()<<endl;

  sort(arr1.begin(),arr1.end());
  for(auto b:arr1)
  {
    cout<<b<<"\t";
  }
  int m=0; 
  int n=arr1.size()-1;
  while(m<n)
  {
    int temp;
    temp=arr1[m];
    arr1[m]=arr1[n];
    arr1[n]=temp;
    m++;
    n--;
  }
  for(auto b:arr1)
  {
    cout<<b<<"\t";
  }

  cout<<arr1[1];
  cout<<arr1[arr1.size()-2];
  
  

}