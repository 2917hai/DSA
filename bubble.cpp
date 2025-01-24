#include <iostream>
using namespace std;
class top
{
public:void bubble(int arr[], int s)
{
for(int i=0; i<s-1; i++)
{
    for(int j=0; j<s; j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

}
for(int m=0; m<s; m++ )
{
    cout<<arr[m]<<" ";
}
}
};
int main()
{
int a[]={1,5,8,6,15,75,2};
int s=sizeof(a)/sizeof(a[0]);
top t;
t.bubble(a,s);
}