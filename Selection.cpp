#include <iostream>
using namespace  std;
class Top
{
public: void Selection(int arr[], int s)
{
for(int i=0; i<s; i++)
{
    int min=i;
    for(int j=i+1; j<s; j++)
    {
        if(arr[j]<arr[min])
        {
            min=j;
        }
    }
    if(min!=i)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    t.Selection(arr,s);

}