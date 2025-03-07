#include <iostream>
using namespace std;
#include <stack>
int main()
{
    /*
    WE can not store data permanently in stack
    LIFO(Last In First Out)
    push() - insert element at the top of the stack
    pop() - remove the top element of the stack
    top() - return the top element of the stack
    empty() - return true if stack is empty
    size() - return the size of the stack
     stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;


    */
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
   for(int i=0; i<s.size(); i++)
   {
       cout<<s.top()<<"\t";
       s.pop();
   }
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
     
    //**********************   user input and max value of stack    ****************************** */
   stack<int>s2;
   int n,a;
   cout<<"how many data do you want to add in staci"<<endl;
   cin>>n;

   for(int i=1; i<=n; i++)
   {
    cout<<"enter value"<<endl;
    cin>>a;
    s2.push(a);
   }
   int max=s2.top();
   while(!s2.empty())
   {
    int b=s2.top();
    if(b>max)
    {
        max=b;
    }
    cout<<s2.top()<<"\t";
    s2.pop();
   }
   cout<<endl;
   cout<<"maximum value is :"<<max<<endl;

    //******************  display the minimum value of stack given stack   ************************** */

    cout<<"minimum value"<<endl;
    stack<int>s1;
    s1.push(60);
    s1.push(10);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    int min=s1.top();
    while (!s1.empty())
    {
       int a=s1.top();
       if(a<min)
       {
        min=a;
       }
        s1.pop();
    }
   cout<<min<<endl;

   //*******************************  Uses of Stack ******************************** */
   /*
   
   */


   //*******************************  balance parenthesis  ************************************ */
    
}