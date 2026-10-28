#include <iostream>
using namespace std ;

int num = 100 ;

int main()
{
   int num = 50 ;
    cout<<"Local variable x = " <<num<<endl ;
    cout<<"Global variable x = " <<::num<<endl ;

    return 0;
}
