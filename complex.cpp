// Create a class complex {real, imaginary}.
// WAP to add, subtract, multiply two complex numbers using operator overloading. 
// Write suitable functions for input and output.
// Also check two complex number is equal or not (overload == operator).

#include<iostream>
using namespace std;
class complex
{
int r,i;
public:
complex()
{
    r=0;
    i=0;
}
complex(int real,int imag)
{
    r=real;
    i=imag;
}
void display()
{
    cout<<"Number is :- "<<r<<"+"<<i<<"i"<<endl;
}
complex operator+(complex& obj)
{
    complex add;
    add.r=r+obj.r;
    add.i=i+obj.i;
    return add;
}
complex operator*(complex& obj)
{
    complex multi;
    multi.r=r*obj.r-i*obj.i;
    multi.i=r*obj.i+obj.r*i;
    return multi;
}
complex operator-(complex& obj)
{
    complex diff;
    diff.r=r-obj.r;
    diff.i=i-obj.i;
    return diff;
}
bool operator==(complex& obj)
{
    if(r==obj.r && i==obj.i)
    {
        return true;
    }
    else
    {
        return false;
    }
}
};
int main()
{
    complex c1(6,4),c2(8,4);
    c1.display();
    c2.display();
    cout<<endl<<"Addition :----- "<<endl;
    complex c3=c1+c2;
    c3.display();
    cout<<endl<<"Multiplication :----- "<<endl;
    complex c4=c1*c2;
    c4.display();
    cout<<endl<<"Substraction :----- "<<endl;
    complex c5=c1-c2;
    c5.display();
}
