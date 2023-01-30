// Create a class Cone. Overload constructor (default constructor, two-argument constructor and
// copy constructor). Create at least three instances of cone to demonstrate constructor
// overloading. The class has two methods, which return area and volume.

#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
class Cone 
{
    private:
        int r,h;
        double vol,ar;
    public:
        Cone()
        {
            r=0;
            h=0;
        }
        Cone(int r,int h)
        {
            this->r=r;
            this->h=h;
        }
        Cone (Cone &c2)
        {
            r=c2.r;
            h=c2.h;
            vol=c2.vol;
            ar=c2.ar;
        }
        void input()
        {
            cout<<"Enter the radius : ";
            cin>>r;
            cout<<"Enter the height : ";
            cin>>h;
        }
        double area()
        {
             ar=3.14*r*(r+sqrt((h*h)+(r*r)));
             return ar;
        }
       double volume()
        {
             vol=(3.14*r*r*h)/3;
             return vol;
        }
        void display()
        {
            cout<<"volume is : ";
            cout<<vol<<endl;
            cout<<"Area is : ";
            cout<<ar<<endl;
        }
};
int main()
{
    Cone c1();
    Cone c2(10,20);
    c2.input();
    double a=c2.area();
    double v=c2.volume();
    c2.display();
    Cone c3(c2);
    c3.display();
}
