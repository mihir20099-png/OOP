#include<iostream>
using namespace std ;

class rectangle {
float l , b , area ;

public:
void accept() ;
void display() ;
};
void rectangle::accept() {
cout<<"Enter the length:" ;
cin>>l ;

cout<<"Enter the breadth:" ;
cin>>b ;
}
void rectangle::display() {
area = l*b ;
cout<<"Area ="<<area<<endl ;

}
int main(){
rectangle r ;
r.accept() ;
r.display() ;
}
