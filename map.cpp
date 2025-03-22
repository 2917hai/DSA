/*Map:
    1. it is an associate container
    2. it contains key and value
    3 . it is sorted bydefault
    4. key is always unique
    5. self balance binary search tree on red black tree
    maintain the lexicoraphy order.
    6. there are 3 types of map
    i) . ordered map (sorted) (red black tree)
    ii). unordered map (unsorted) (hashing technique)
    iii) multimap (duplicate values allowed )
*/

#include <iostream>
#include <map>
using namespace std;

int main (){

map<int ,string>student{{101,"amit"},{102,"ajay"},{900,"ritik"}, {47,"ankit"} };

student[122]="arun";
//  Insertion data in map 
student.insert({1, "Geeks"});
student.insert({2, "for"});
student.insert({3, "Geeks"});
student.insert({4, "Geeks"});

// Accessing the elements of map
cout << student[1] << endl;
cout << student.at(2) << endl;
cout << student[900] << endl;


// Update the value of map
student[1] = "GFG";
student.at(2) = "for";
student[900] = "Umesh";


// Erase the element of map
student.erase(1);
student.erase(2);
student.erase(900);



// Find the element of map
if (student.find(3) != student.end())
    cout << "Found";
else
    cout << "Not Found";


    // size of map
cout << "\nSize of map is : " << student.size();



//check if map is empty or not
if (student.empty())
    cout << "\nMap is empty";
else
    cout << "\nMap is not empty";




    // Display the elements of map
cout << "\nElements of map are : \n";
for (auto p:student){
    cout<<p.first <<" =  "<<p.second<<"\n";
}



// clear the map
student.clear();
cout << "\nMap is cleared\n";










for (auto p:student){
    cout<<p.first <<" =  "<<p.second<<"\n";
}


}