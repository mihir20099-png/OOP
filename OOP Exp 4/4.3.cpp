#include<iostream>
using namespace std ;

class Box{
float l , b , h ;

public:
void accept()  ;
void calculate() ;
};
void Box::accept() {
cout<<"Enter the length" ;
cin>>l ;

cout<<"Enter the breadth" ;
cin>>b ;

cout<<"Enter the height" ;
cin>>h ;
}
void Box::calculate() {
float volume = l*b*h ;
cout<<"Volume of the box ="<<volume<<endl ;
}
int main() {
Box b ;

b.accept() ;
b.calculate() ;

return 0 ;
}
