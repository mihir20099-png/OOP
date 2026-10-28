#include<iostream>
using namespace std ;

class circle {
float radius ;

public:

void acceptRadius()
{
cout<<"Enter Radius" ;
cin>>radius ;
}
void calculateArea()
{
float area = 3.14*radius*radius ;
cout<<"Area of circle = "<<area<<endl ;
}
};

int main()
{
circle c ;
c.acceptRadius() ;
c.calculateArea() ;

return 0 ;
}
