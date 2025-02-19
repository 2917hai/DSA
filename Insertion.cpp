#include <iostream>
using namespace std;
class Top
{
public:void Inser(int arr[], int s)
{
  for(int i=1; i<s; i++)
  {
   int min=i;
   while (min>0 && arr[min]<arr[min-1])
   {
    int temp;
    temp=arr[min];
    arr[min]=arr[min-1];
    arr[min-1]=temp;
    min--;
   }
   
  }
    for(int i=0; i<s; i++)
    {
        cout<<arr[i];
    }
}
};
int main()
{
    int arr[]={4,3,1,8,6,7};
    int s=sizeof(arr)/sizeof(arr[0]);
    Top t;
    t.Inser(arr,s);
  
}