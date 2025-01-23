#include <iostream>
using namespace std;
class top
{
 public:void show(int arr[], int s)
 {
    if(s==0)
    {
        cout<<"no data"<<endl;
    }
    else{
         for(int i=0; i<s; i++)
        {
        cout<<arr[i];
        if(i<=s-2)
        {
            cout<<","; 
        }
    }
    

    }
 
 }
};
int main()
{
    int a[]={1,2,3,4,5,9};
    //  int a[]={};
    int s=sizeof(a)/sizeof(a[0]);
    top p;
    p.show(a,s);  
}