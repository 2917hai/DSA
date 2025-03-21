#include <iostream>
#include <stack>
using namespace std;
bool pvalid(string s)
{
    stack<char>st;
    bool r=true;
    for(int i=0; i<st.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(s[i]==')' && !st.empty() && st.top()=='(')
        {
            st.pop();
        }
        else if(s[i]=='}' && !st.empty() && st.top()=='{')
        {
            st.pop();
        }
        else if(s[i]==']' && !st.empty() && st.top()=='[')
        {
            st.pop();
        }
        else
        {
            r= false;
            break;
        }
        
    }
    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
}
}
int main()
{
    string s = "((";
    if(pvalid(s))
    {
        cout<<"Valid Parenthesis"<<endl;
    }
    else
    {
        cout<<"Invalid Parenthesis"<<endl;
    }
}




