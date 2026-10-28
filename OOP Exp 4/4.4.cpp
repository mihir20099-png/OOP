
#include <iostream>
using namespace std ;

class student {
    private:
    int rollno , marks ;
    string name ;

    public:
    void accept() ;
    void display() ;
} ;

void student::accept() {
    cout<<"Enter Name of the student:" ;
    cin>>name ;

    cout<<"Enter Roll number of the student:" ;
    cin>>rollno ;

     cout<<"Enter Marks of the student:" ;
    cin>>marks ;
}

void student::display() {
    cout<<"Name ="<<name<<endl ;
    cout<<"Roll number ="<<rollno<<endl ;
    cout<<"Marks ="<<marks<<endl ;
}


int main()
{
  student s1 ;
  s1.accept() ;
  s1.display() ;

    return 0;
}
