 //    arr.at(i)  use for error handling in Array template
 #include <iostream>
 #include <array>
 #include <algorithm>  //all algorith available 
 using namespace std;
 int main()
 {
   array<int,5>arr{20,50,10,30,40};     // declearation of array 
   array<double,3>v{21.2,55.1,65.5};   // Declearation of array
   for(int i=0; i<arr.size(); i++)
 {
    cout<<arr.at(i)<<"\t";
    cout<<arr[i]<<"\t";
 }
 cout<<endl;



 for(int p:arr)    // for each loop
 {
  cout<<p<<"\t";
 }
 cout<<endl;



 for(auto p:arr)   // auto are use to auto detect the datatype 
 {
  cout<<p<<"\t";
 }
 cout<<endl;



 for(auto s:v)   // auto are use to auto detect the datatype 
 {
  cout<<s<<"\t";
 }
 cout<<endl;


cout<<"front"<<arr.front()<<endl;    // display first element 
cout<<"Back"<<arr.back()<<endl;      // display last element 
sort(arr.begin(),arr.end());         // begin=0index, end=null Pointer
for(auto k:arr)
{
  cout<<k<<"\t";
}
cout<<endl;
sort(arr.begin(),arr.end());
for(auto p:arr)
{
  cout<<p<<"\t";
}
cout<<endl;
  cout<<"Second largest  "<<arr[(arr.size()-2)]<<endl;   // Second largest 
  cout<<"Second smallest  "<<arr[1]<<endl;               // Second Smallest




  

 }