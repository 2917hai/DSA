#include <iostream>
using namespace std;
class top
{
    int c=0;
    bool f=true;
public:void bubble(int arr[], int s)
{
for(int i=0; i<s; i++)
{
    for(int j=0; j<s-i-1; j++)
    {
        c++;
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            f=false;
            
        }
    }
    if (f==true)
    {
        break;
    }
    
}
cout<<c<<endl;
for(int m=0; m<s; m++ )
{
    cout<<arr[m]<<" ";
}

}
};
int main()
{
int a[]={1,2,3,4,8,5}; 
int s=sizeof(a)/sizeof(a[0]);
top t;
t.bubble(a,s);
}


//  this code pass all case  