//Overload a function named Area() to calculate the area of rectangle, square,triangle and
//cylinder.

#include<iostream>
using namespace std;
class math
{
public:
int area(int l,int b)
{
    int a;
    a=(l*b);
    return a;
}
int area(int s)
{
    int d;
    d=(s*s);
    return d;
}
double area(int b, float p)
{
    double e;
    e=b*p*1/2;
    return e;
}
double area(float h,float r)
{
    double f;
    f=2*(3.14)*r*h+2*(3.14)*r*r*r;
    return f;
}
};
int main()
{
    int l,b,s;
    float h,r,p;
    math obj1,obj2,obj3,obj4;
    cout<<"CALCULATE THE AREA OF THE RECTANGLE :-----"<<endl;
    cout<<"Enter the length of the rectangle : ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle : ";
    cin>>b;
    cout<<endl;
    cout<<"The area of rectangle is : "<<obj1.area(l,b);
    cout<<endl<<endl;
    cout<<"---------------------------------------------";
    cout<<endl<<endl;
    
    cout<<"CALCULATE THE AREA OF THE SQUARE :-----"<<endl;
    cout<<"Enter the side of the square : ";
    cin>>s;
    cout<<endl;
    cout<<"The area of rectangle is : "<<obj2.area(s);
    cout<<endl<<endl;
    cout<<"---------------------------------------------";
    cout<<endl<<endl;
    cout<<"CALCULATE THE AREA OF THE TRIANGLE :-----"<<endl;
    cout<<"Enter the base of the triangle : ";
    cin>>b;
    cout<<"Enter the height of the triangle : ";
    cin>>p;
    cout<<endl;
    cout<<"The area of triangle is : "<<obj3.area(b,p);
    cout<<endl<<endl;
    cout<<"---------------------------------------------";
    cout<<endl<<endl;
    cout<<"CALCULATE THE AREA OF THE CYLINDER :-----"<<endl;
    cout<<"Enter the height of the cylinder : ";
    cin>>h;
    cout<<"Enter the radius of the cylinder : ";
    cin>>r;
    cout<<endl;
    cout<<"The area of cylinder is : "<<obj4.area(h,r);
}
