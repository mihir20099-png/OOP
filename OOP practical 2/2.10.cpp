
#include <iostream>
#include<iomanip>
using namespace std ;



int main()
{
string subjects[5] ;
float marks[5] ;
int i ;

cout<<"Enter name of five subjects" ;
for(i=0 ; i<5 ; i++)
{
    cin>>subjects[i] ;

}

cout<<"Enter marks of five subjects" ;
for(i=0 ; i<5 ; i++)
{
    cin>>marks[i] ;

}

cout<<setfill('*')<<setw(36)<<"*"<<endl ;
cout<<setfill(' ') ;
cout<<left<<setw(20)<<"Subject"<<right<<setw(10)<<"Marks"<<endl ;

cout<<setfill('-')<<setw(36)<<"-"<<endl ;
cout<<setfill(' ') ;

for(i=0 ; i<5 ; i++) {
    cout<<left<<setw(20)<<subjects[i]<<right<<setw(10)<<marks[i]<<endl ;
}

cout<<setfill('*')<<setw(36)<<"*"<<endl ;




    return 0;
}
