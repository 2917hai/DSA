#include <iostream>
using namespace std;
#include <map>
int main()
{
    map<int , string>studetns{{1,"Umesh"},{2,"Kumar"},{3,"yadav"}};
    for(auto p:studetns)
    {
        cout<<p.first<<"\t"<<p.second<<endl;
    }

}