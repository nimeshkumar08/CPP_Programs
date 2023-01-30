//Write a program to demonstrate deep copy using copy constructor.
//Take an array and modify one element of the array using a function called setData().

#include<iostream>
using namespace std;
int i;
class point
{
    int size,*p;
    public:
    point()
    {
        size=5;
        p=new int[size];
    }
    void setData()
    {
        cout<<"Enter the numbers : \n";
        for(i=0;i<size;i++)
        {
            cin>>*(p+i);
        }
    }
    void display()
    {
        cout<<"\nDisplaying : ";
        for(i=0;i<size;i++)
        {
            cout<<*(p+i)<<endl;
        }
    }
    void changedata()
    {
        *(p+2)=1;
    }
    point(point &obj)
    {
        size=obj.size;
        p=new int[size];
        for(i=0;i<size;i++)
        {
            *(p+i)=*(obj.p+i);
        }
    }
};
int main()
{
    point p1;
    p1.setData();
    p1.display();
    cout<<"\n";
    point p2=p1;
    p1.changedata();
    p1.display();
    p2.display();
    return 0;
}
