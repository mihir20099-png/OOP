#include<iostream>
using namespace std ;

int main()
{
float f ;
int i ;

cout<<"Enter Float value" ;
cin>>f ;

i = (int)f ;
cout<<"Float converted to Integer:"<<i<<endl ;

cout<<"Enter Integer value" ;
cin>>i ;

f = (float)i ;

cout<<"Integer converted to float"<<f<<endl ;

return 0 ;


}
