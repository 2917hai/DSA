#include <iostream>
using namespace std;
void select (int arr[], int s)
{
    for(int i=0; i<s; i++)
    {
        int chotu=i;
        for(int j=i+1; j<s; j++)
        {
            if(arr[j]<arr[chotu])
            {
                chotu=j;
            }
        }
        if(chotu!=i)
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[chotu];
            arr[chotu]=temp;
        }
    }
    for(int m=0; m<s; m++)
    {
        cout<<arr[m]<<"\t";
    }

}
int main()
{
int arr[]={4,1,5,3,2};
int s=sizeof(arr)/sizeof(arr[0]);
for(int k=0; k<s; k++)
{
    cout<<arr[k]<<"\t";
}
   cout<<"before sorting"<<endl;
   select(arr,s);
   for(int r=0; r<s; r++)
{
    cout<<arr[r]<<"\t";
}
   cout<<"After sorting";
}