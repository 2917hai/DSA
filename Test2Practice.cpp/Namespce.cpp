#include <iostream>
using namespace std;
namespace Cybrome
{
    void show()
    {
        cout<<"cybrome namespce called"<<endl;
    }
    namespace ClassRoom
    {
        void Room()
        {
            cout<<"class Room  namespce called"<<endl;
        }
    }
}
namespace Bhopal
{
    void show()
    {
        cout<<"Bhopal namespace called"<<endl;
    }
}

    namespace Uma
    {
        class top
        {
            public:
            void show()
            {
                cout<<"Uma";
            }
        }t;
       
    }

int main()
{
   Cybrome::show();
   Bhopal::show();
   Cybrome::ClassRoom::Room();
 
}