#include <iostream>
using namespace std;
class Uma
{
public: void bubble(int arr[], int s)
{
    bool f=true ;
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                f=false;
            }
        }
        if(f==true)
        {
            break;
        }
    }
}
};
int main()
{
    int arr[]={1,2,3,4,5,6};
    int s=sizeof(arr)/sizeof(arr[0]);
    Uma u;
    u.bubble(arr,s);
    for(int m=0; m<s; m++)
    {
        cout<<arr[m];
    }
    
}