/*2. Define a class Shape with member variable to store name of the shape (like
rectangle, square, circle, etc.) Provide methods to set and display name of the
shape. Define a pure virtual function area() in Shape class. Define two derived
classes of Shape, one is rectangle and second is square. Define appropriate
members in both the classes. Demonstrate usage of the classes by making driver
function main() */

#include<iostream>
#include<string.h>
using namespace std ;

class Shape
{
    private :
        char shapeName [30] ;
    public :
        void setShapeName(char name[]) { strcpy(shapeName,name) ; }
        void showName() { cout<<"Shape Name - "<<shapeName<<endl ; }
        
        //PVF
        virtual void area () = 0 ;
            
} ;
class Rectangle : public Shape
{
    private :
        int a, b ; 
    public :

        void setData(int x, int y)
        {
            a = x ;
            b = y ;
        }
        void  area()
        {
            cout<<"area of rectangle ="<< a*b <<endl ;
        }
} ;
class Square : public Shape
{
    private :
        int x ;
    public :
        void setData(int x)
        {
            this->x = x ;
        }
        void area ()
        {
            cout<<"area of square ="<< x*x <<endl;
        }
} ;
int main ()
{
    Rectangle r1 ;
    Square s1 ;

    r1.setShapeName("Rectangle") ;
    r1.showName() ;
    r1.setData(4,5) ;
    r1.area() ;

    cout<<"\n***************\n" ;
    s1.setShapeName("Square") ;
    s1.showName() ;
    s1.setData(6) ;
    s1.area() ;

    return 0 ;
}
