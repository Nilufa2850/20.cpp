/*1. Define a class A with two int type member variables. Define a member function to
setData() and showData() to set and display values of member variables. Also
define a member function with the name input() to take input from the user. Define a
class B with one int type member variable. Override input() function in order to input
three values from the user for all three member variables. Also override showData()
function to display all three values.*/

#include<iostream>
#include<string.h>
using namespace std ;

class A
{
    private :
        int x, y ;
    public :
        void setData(int x, int y) { this->x = x ; this->y = y ; }
        void showData() { cout<<"\nX="<<x<<" Y="<<y ; }
        void input()
        {
            cout<<"Enter values of X & Y : " ;
            cin>>x>>y ;
        }
} ;
class B : public A
{
    private :
        int z ;
    public :
        void input()
        {
            int a,b ;
            cout<<"Enter values of X,Y & Z : " ;
            cin>>a>>b>>z ;
            setData(a,b) ;
        }
        void showData()
        {
            A::showData() ;
            cout<<" Z="<<z<<endl ;
        }
} ;
int main ()
{
    A m ;
    m.input() ;
    m.showData() ;

    B n ;
    n.input() ;
    n.showData() ;
    return 0 ;
}
