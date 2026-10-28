#include <iostream>
using namespace std ;

namespace physics{
    string subject = "Physics" ;
}

namespace chemistry{
    string subject = "Chemistry" ;
}


int main()
{
cout<<"Subject 1:"<<physics::subject<<endl ;
cout<<"Subject 2:"<<chemistry::subject<<endl ;

    return 0;
}
