#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    array<int, 5>arr{34,34,3,1,8};
    sort(arr.begin(), arr.end());
    // 1). duplicate case (find 2nd Highest no)
    // 2). Array is empty()
    // 3). Array constain only one ("there is only one element ")
    for(auto a:arr)
    {
        cout<<a<<"\t";
    }
    cout<<endl;
    


    ///******************************    Swap Two Array    *************************************** */

    array<int, 5>arr1{34,34,3,1,8};   // Size of both array must be same  
    array<int, 5>arr2{1,2,3,4,5};
    // swap(arr1,arr2);
    //    OR 
    arr1.swap(arr2);
    for(auto p:arr1)
    {
        cout<<p<<"\t";
    }
    cout<<endl;
    for(auto p:arr2)
    {
        cout<<p<<"\t";
    }

    
}