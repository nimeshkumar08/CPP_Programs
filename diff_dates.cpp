//WAP to calculate difference between two dates using operator overloading.

#include<iostream>
using namespace std;
class diff
{
    int day,month,year;
    public:
    diff(int d=0,int m=0,int y=0)
    {
        day=d;
        month=m;
        year=y;
    }
    diff operator-(diff t1)
    {
        diff p1;
        p1.day=day-t1.day;
        p1.month=month-t1.month;
        p1.year=year-t1.year;
        if(p1.month<0)
        {
            p1.month=12+p1.month;
            p1.year=p1.year-1;
        }
        if(p1.day<0)
        {
            p1.day=31+p1.day;
        }
        return p1;
    }
    void display()
    {
        cout<<"The year is : "<<year<<endl<<"The month is : "<<month<<endl<<"The day is : "<<day;
    }
};
int main()
{
    diff c1(10,11,2022),c2(1,1,2002);
    diff c3=c1-c2;
    c3.display();
}
