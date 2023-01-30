// WAP to create a class Student and derive 3 classes from it- 
// Engineering, Law and Fine_Arts.
// Create functions to input_data for taking the inputs(name, marks, roll no.).
// Create another function display to display the details of the particular student.
// The student details variables- name, marks, roll no., be the member of the Student class.
// The functions(input_data and display) will be separate for 3 different classes.

#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll,marks;
    student()
    {
        roll=0;
        marks=0;
    }
};
class engineering :public student
{
    public:
    void input_data()
    {
        cin.ignore();
        cout<<"Enter the name of the student : ";
        getline(cin,name);
        cout<<"Enter the roll no. of the student : ";
        cin>>roll;
        cout<<"Enter the marks of the student : ";
        cin>>marks;
    }
    void display()
    {
        cout<<"The name of the student is : "<<name<<endl;
        cout<<"The roll no. of the student is : "<<roll<<endl;
        cout<<"The marks of the student is : "<<marks<<endl;
    }
};
class law :public student
{
    public:
    void input_data()
    {
        cout<<"Enter the name of the student : ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the roll no. of the student : ";
        cin>>roll;
        cout<<"Enter the marks of the student : ";
        cin>>marks;
    }
    void display()
    {
        cout<<"The name of the student is : "<<name<<endl;
        cout<<"The roll no. of the student is : "<<roll<<endl;
        cout<<"The marks of the student is : "<<marks<<endl;
    }
};
class fine_arts :public student
{
    public:
    void input_data()
    {
        cout<<"Enter the name of the student : ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the roll no. of the student : ";
        cin>>roll;
        cout<<"Enter the marks of the student : ";
        cin>>marks;
    }
    void display()
    {
        cout<<"The name of the student is : "<<name<<endl;
        cout<<"The roll no. of the student is : "<<roll<<endl;
        cout<<"The marks of the student is : "<<marks<<endl;
    }
};
int main()
{
    engineering e;
    cout<<"ENGINEERING :------"<<endl;
    cout<<"Input the details below :-"<<endl;
    e.input_data();
    cout<<endl;
    cout<<"The details are :-"<<endl;
    e.display();
    cout<<endl;
    cout<<"-------------------------------";
    cout<<endl<<endl;
    law l;
    cout<<"LAW :------"<<endl;
    cout<<"Input the details below :-"<<endl;
    l.input_data();
    cout<<endl;
    cout<<"The details are :-"<<endl;
    l.display();
    cout<<endl;
    cout<<"-------------------------------";
    cout<<endl<<endl;
    fine_arts fa;
    cout<<"FINE ARTS :------"<<endl;
    cout<<"Input the details below :-"<<endl;
    fa.input_data();
    cout<<endl;
    cout<<"The details are :-"<<endl;
    fa.display();
}
