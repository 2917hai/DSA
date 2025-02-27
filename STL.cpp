// #include <iostream>
// using namespace std;     /// namespace is  a collection of identifiers()
//                              //  namespace by default specifier public  
// template<typename t1>
// class cybrome
// {
//     public:t1 show(t1 a)
//     {
//         return ++a;

//     }
// };
// int main()
// {
// cybrome<int>obj;
// cout<<obj.show(9);
// }





// #include <iostream>
// // using namespace std;
// int main()
// {
// std::cout<<"hello";
// int a;
// std::cin>>a;
// std::cout<<a;
// }


// #include <iostream>
// using namespace std;
// template<typename t1>
//  t1 sum(t1 a)
// {
//   return a*a;
// }
// int main()
// {
//    cout<<sum(5);
// }


//   Namespce is collection of identifiers 

#include <iostream>
using namespace std;
namespace cybrome     // by default public hota hai 
{
    void show()
    {
        cout<<"done";
    }
    namespace bhopal
    {
        void show()
        {
            cout<<"bhopal";
        }
    }
    class iostream
    {
      public:void show()
      {
        cout<<"done iostream class";
      }
    }coutnew;
}
// int main()
// {
  
//     cybrome::coutnew.show();
//     cybrome::show();
//     cybrome::bhopal::show();
// }




// using namespace cybrome;
// int main()
// {
//    show();
//    bhopal::show();
//    coutnew.show();
// }



using namespace cybrome::bhopal;
int main()
{

   show();   /// bhopal
   cybrome::show();   // cybrome
  
}