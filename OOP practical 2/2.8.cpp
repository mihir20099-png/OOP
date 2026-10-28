#include <iostream>
using namespace std ;



int main()
{
int n , i ;
int sum = 0 , average ;
int *arr = new int[n] ;
cout<<"Enter the number of elements in the array" ;
cin>>n ;

cout<<"Enter array elements" ;
for(i=0 ; i<n ; i++)
{
    cin>>arr[i] ;
}

for(i=0 ; i<n ; i++)
{
    sum = sum+arr[i] ;
}
average = (float)sum/n ;

cout<<"Sum ="<<sum<<endl ;
cout<<"Average ="<<average<<endl ;

    return 0;
}
