#include <iostream>
using namespace std;
class Top
{
 public:void bubble(int arr[],int s)
 {
  bool b=false;
  for(int i=0; i<s; i++)
  {
    for(int j=0; j<s-i-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
          int temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
          b=true;
        }
    }
    if(b==false)
    {
        break;
    }
  }
 }
};
int main()
{
    int arr[]={4,2,8,6,3,7,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    Top t;
    t.bubble(arr,s);
    for(int i=0; i<s; i++)
    {
        cout<<arr[i];
    }
}