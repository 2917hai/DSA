#include <iostream>
using namespace std;
int devide(int arr[], int low, int high)
{
int pv=arr[low];
int i=low+1;
int j=high;
do
{
    while (arr[i]<pv)
    {
        i++;
    }
    while (arr[j>pv])
    {
       j--;
    }
    if(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
    
   
} while (i<j);

    int temp=arr[j];
    arr[j]=arr[low];
    arr[low]=temp;
    return j;
}
void qksort(int arr[], int low, int high)
{
    int pv;
    if(low<high)
    {
        pv=devide(arr, low, high);
        qksort(arr, pv+1, high);
        qksort(arr, low, pv-1);
    }
}


int main()
{
    int arr[]={8,5,6,7,9,3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i];
    // }
    qksort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
}