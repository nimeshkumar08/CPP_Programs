// Design two classes Cartesian {x, y} and Polar {r, ʘ} to perform basic operations
// and interconversions between them. Default and copy constructors for both the classes.
// Overloaded '-' to find distance between two such point objects (both of same type).
// Distance should be in units (int). Overloaded ‘==’ to compare (between same objects). 
// Overloaded '==' to compare (between two objects of different types).
// Overload casting operators for inter-conversions between them. 

#include<iostream>
using namespace std;
class Cartesian
{
    int x, y;
    public:
    Cartesian(int a, int b)
    {
    x=a; y=b; 
    cout<<"The value are : "<<x<<endl<<y<<endl;
    }
    Cartesian(Cartesian & c)
    {
     x=c.x; y=c.y;   
         cout<<"The value are : "<<x<<endl<<y<<endl;
    }
    void operator-(Cartesian c)
    {
        x=x-c.x;
        y=y-c.y;
        cout<<"The value of difference are : "<<x<<endl<<y<<endl;
    }
    void operator==(Cartesian c)
    {
        if(x==c.x && y==c.y)
                cout<<"Both the objects are having equal value"<<endl;
        else
                cout<<"Not equal"<<endl;
    }
};
class Polar
{
    int r, theta;
    public:
    Polar(int a, int b)
    {
    int r=a; int theta=b;
    cout<<"The values of polar co-ordinate are : "<<r<<endl<<theta<<endl;
    }
    Polar(Polar & d)
    {
        r=d.r;
        theta=d.theta;
        cout<<"The value after implicitly assignig usign copy constructors are: "<<r<<endl<<theta<<endl;
    }
    void operator-(Polar f)
    {
        r=r-f.r;
        theta=theta-f.theta;
            cout<<"The values of Polar co-ordinate difference are : "<<r<<endl<<theta<<endl;
    }
    void operator==(Polar f)
    {
        if(r==f.r &&theta==f.theta)
                cout<<"Both the objects are having equal value"<<endl;
        else
                cout<<"Not equal"<<endl;
    }
};
int main()
{
    Cartesian c1(10, 12);
    Cartesian c2(12, 14);
    Cartesian c3=c2;
    Polar p1(5, 30);
    Polar p2(10, 15);
    Polar p3=p2;
    return 0;
}
