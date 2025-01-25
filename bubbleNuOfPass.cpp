#include <iostream>
using namespace std;
class Top
{
public:void show(int arr[], int s)
{
    int pass=0;
    int pass1;
    bool f=true;
    int a=0;
    for(int i=0; i<s; i++)
    {
         pass1=0;
       for(int j=0; j<s-i-1; j++)
       {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            f=false;
            pass1++;
        }
        pass++;
       }
        cout<<"in pass"<<i+1<<"  "<<pass1<<"swaping"<<endl;
       
       if(f==true)
       {
        break;
       }
    }
    for(int n=0; n<s; n++)
    {
        cout<<arr[n];
    }
    cout<<"\n"<<pass;
}
};
int main()
{

int s;
cout<<"enter size of array"<<endl;
cin>>s;
int a[s];
for(int m=0; m<s; m++)
{
    cin>>a[m];
}
Top t;
t.show(a,s);
}