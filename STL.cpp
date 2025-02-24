#include <iostream>
using namespace std;
template<typename t1>
class cybrome
{
    public:t1 show(t1 a)
    {
        return ++a;

    }
};
int main()
{
cybrome<int>obj;
cout<<obj.show(9);
}