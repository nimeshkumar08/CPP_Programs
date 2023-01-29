// Design a Student class with roll, name, marks of three subjects and their total. 
// Add functions to take input, display data, and modify marks. 
// Take an array of N students. Display the records after taking input. 
// Then modify a particular record marks. View the record after modification.

#include<iostream>
using namespace std;

int i;
class student
{
int roll,m1,m2,m3,total;
string name;
public:

student()
{
roll=0;
m1=0;
m2=0;
m3=0;
total=0;
}

void input()
{
    cout<<endl;
    cin.ignore();
    cout<<"Enter the name of the student : ";
    getline(cin,name);
    
    cout<<"Enter the roll no. of the student : ";
    cin>>roll;
    cout<<"Enter the marks of Mathematics : ";
    cin>>m1;
    cout<<"Enter the marks of COCA : ";
    cin>>m2;
    cout<<"Enter the marks of DSA : ";
    cin>>m3;
}

void calculate()
{
    total=m1+m2+m3;
    cout<<"The total marks is : "<<total<<endl;
}

void display()
{
    cout<<endl<<endl;
    cout<<"The name of the student is : "<<name<<endl;
    cout<<"The roll no. of the student is : "<<roll<<endl;
    cout<<"The marks of mathematics is : "<<m1<<endl;
    cout<<"The marks of dsa is : "<<m2<<endl;
    cout<<"The marks of coca is : "<<m3<<endl;
    calculate();
}

void modify()
{
    cout<<"Enter the modified value of mathematics : ";
    cin>>m1;
    cout<<"Enter the modified value of dsa : ";
    cin>>m2;
    cout<<"Enter the modified value of coca : ";
    cin>>m3;
    cout<<endl;
}

int getroll()
{
    return roll;
}
};

int main()
{
    int ch,n,x,i;
    cout<<"Enter the number of students : ";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)
    {
        s[i].input();
    }
    for(i=0;i<n;i++)
    {
        s[i].display();
    }
    cout<<endl<<endl;
    cout<<"Do you want to modify press 0(for yes) or press 1(for no) : ";
    cin>>ch;
    if(ch==0)
    {
        cout<<"Enter the students roll no. you want to modify::";
        cin>>x;
        for(i=0;i<n;i++)
    {
        if(x==s[i].getroll())
        {
            s[i].modify();
        }
    }
    for(i=0;i<n;i++)
    {
        s[i].display();
    }
    }
    else
    {
        cout<<"No Modification !!!!";
    }
}
