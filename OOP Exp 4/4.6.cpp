#include<iostream>
using namespace std ;

class square{
private:
int n ;

public:
void accept()
{
cout<<"Enter a number" ;
cin>>n ;
}
void calculate()
{
cout<<"Square of "<<n<<"="<<n*n<<endl ;
}
};
int main()
{
square s ;
s.accept() ;
s.calculate() ;
return 0 ;
}
