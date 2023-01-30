// WAP to add two integers, two floats and two strings. Overload + operator.

#include<iostream>
using namespace std;
class add
{
    public:
    int a;
    double b;
    string c;
    public:
    void input(int x)
    {
        a=x;
    }
    void input(double y)
    {
        b=y;
    }
    void input(string z)
    {
        c=z;
    }
    add operator +(add &obj)
    {
        add ob;
        ob.a=a+obj.a;
        ob.b=b+obj.b;
        ob.c=c+obj.c;
        return ob; 
    }    
};
int main() {
    add a1,a2,a3;
    a1.input(2);
    a2.input(3);
    a1.input(2.5);
    a2.input(3.2);
    a1.input("Nimesh");
    a2.input("Kumar");
    a3=a1+a2;
    cout<<"\n"<<a1.a<<"+"<<a2.a<<"="<<a3.a;
    cout<<endl;
    cout<<"\n"<<a1.b<<"+"<<a2.b<<"="<<a3.b;
    cout<<endl;
    cout<<"\n"<<a1.c<<"+"<<a2.c<<"="<<a3.c;
    return 0;
}
