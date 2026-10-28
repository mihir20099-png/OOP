#include<iostream>
using namespace std ;

class staff{
int id ;
string post ;

public:
 void accept(){
 cout<<"Enter the id" ;
 cin>>id ;

 cout<<"Enter the post" ;
 cin>>post ;
}

 void display() {
 cout<<"Employee ID:"<<id <<endl ;

 cout<<"Employee post:"<<post <<endl ;

 }

};
int main()
{
staff s1 , s2 ;
s1.accept() ;
s2.accept() ;
s1.display() ;
s2.display() ;

return 0 ;
}
