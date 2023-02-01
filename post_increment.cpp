#include<iostream>
using namespace std;

class Post
{
    int a;
    public:
    Post()
    {
        a=0;
    }
    Post(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<a;
    }
    void operator++(int)
    {
        a=a+1;
    }
};

int main()
{
    Post P1(5);
    P1.display();
    cout<<" ";
    P1++;
    P1.display();
}