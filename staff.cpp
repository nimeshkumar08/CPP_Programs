// Design the following class hierarchy of an educational institution.
// Class Staff (name, code).
// Class Officer (grade), subclass of Staff.
// Class Teacher (subject), subclass of Staff.
// Class Typist (speed), subclass of Staff.
// Class CasualTypist (daily wages), subclass Typist.
// Class RegularTypist (remuneration), subclass of Typist.
// Create different objects of each class except Staff,
// input values for different variables for each one, store these objects using array.

#include <iostream>
using namespace std;
class Staff
{
    protected:
    string name;
    int code;
    public:
    void accept()
    {
        cin.ignore();
        cout<<"Enter the name of the employee : ";
        getline(cin,name);
        cout<<"Enter the employee code : ";
        cin>>code;
    }
    void display()
    {
        cout<<"The employee name is : "<<name<<endl;
        cout<<"The emplyee code : "<<code<<endl;
    }
};
class Officer:public Staff
{
    protected:
    string grade;
    public:
    void accept()
    {
        cout<<"Enter the grade of the employee : ";
        cin>>grade;
    }
    void display()
    {
        cout<<"The grade of the employee is : "<<grade<<endl;
    }
};
class Teacher:public Staff
{
 protected:
    string subject;
    public:
    void accept()
    {
        cout<<"Enter the subject : ";
        cin>>subject;
    }
    void display()
    {
        cout<<"The employee subject is : "<<subject<<endl;
    }
};
class Typist:public Staff
{
    protected:
    int speed;
    public:
    void accept()
    {
        cout<<"Enter the typist speed : ";
        cin>>speed;
    }
    void display()
    {
        cout<<"The typist speed is : "<<speed<<endl;
    }
};
class Casual_Typist:public Typist
{
    protected:
    float daily_wages;
    public:
    void accept()
    {
        cout<<"Enter the daily wage : ";
        cin>>daily_wages;
    }
    void display()
    {
        cout<<"The daily wage is : "<<daily_wages<<endl;
    }
};
class Regular_Typist:public Typist
{
    protected:
    float renumeration;
    public:
    void accept()
    {
        cout<<"Enter the renumeration : ";
        cin>>renumeration;
    }
    void display()
    {
        cout<<"The renumeration is : "<<renumeration<<endl;
    }
};
int main()
{
    Officer ob1;
    ob1.Staff::accept();
    ob1.accept();
    cout<<endl;
    ob1.Staff::display();
    ob1.display();
    Teacher ob2[3];
    for(int i=0; i<3; i++)
    {
        cout<<endl<<endl;
        cout<<"Enter details for Teacher no. "<<(i+1)<<" :-"<<endl;
        ob2[i].Staff::accept();
        ob2[i].accept();
    }
    for(int i=0; i<3; i++){
        cout<<endl<<endl;
        cout<<"Details for Teacher no. "<<(i+1)<<" :-"<<endl;
        ob2[i].Staff::display();
        ob2[i].display();
    }
    Regular_Typist ob3;
    cout<<endl<<endl;
    ob3.Staff::accept();
    ob3.accept();
    cout<<endl;
    ob3.Staff::display();
    ob3.display();
    Casual_Typist ob4[2];
    for(int i=0; i<2; i++)
    {
        cout<<endl<<endl;
        cout<<"Enter details for Typist no. "<<(i+1)<<" :-"<<endl;
        ob4[i].Staff::accept();
        ob4[i].Typist::accept();
        ob4[i].accept();
    }
    for(int i=0; i<2; i++){
        cout<<endl<<endl;
        cout<<"Details for Typist no. "<<(i+1)<<" :-"<<endl;
        ob4[i].Staff::display();
        ob4[i].Typist::display();
        ob4[i].display(); 
}}
