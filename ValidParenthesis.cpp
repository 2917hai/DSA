#include <iostream>
#include <stack>
using namespace std;
bool pvalid(string s)
{
    stack<char>st;
    for(int i=0; i<s.size(); i++)
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
            return false;
        }
    }
    return st.empty();
}
int main()
{
    string s = "{[()]}";
    if(pvalid(s))
    {
        cout<<"Valid Parenthesis"<<endl;
    }
    else
    {
        cout<<"Invalid Parenthesis"<<endl;
    }
}