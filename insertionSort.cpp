#include <iostream>
using namespace std;
class top
{
public: void insertsort(int arr[], int s)
{
    for(int m=1; m<s; m++)
    {
        int chotu=m;
        while (chotu>=0 && arr[chotu]<arr[chotu-1])
        {
            int temp;
            temp=arr[chotu];
            arr[chotu]=arr[chotu-1];
            arr[chotu-1]=temp;
            chotu--;
            /* code */
        }
        
    }
    for(int n=0; n<s; n++)
    {
        cout<<arr[n];
    }
}
};
int main()
{
    int s; 
    cout<<"enter the size of arry ";
    cin>>s;
    int a[s];
    cout<<"enter the data";
    for(int i=0; i<s; i++)
    {
        cin>>a[i];
    }
    top t;
    t.insertsort(a,s);

}