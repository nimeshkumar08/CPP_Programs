// Assume that a bank maintains two kinds of accounts for their customer: 
// first one is called savings account and the other is called current account. 
// The savings account holders should also maintain a minimum balance and if the balance falls below this level, 
// a service charge imposed. Create a class account that stores customer name, account number and type of account. 
// From this, derive classes CrrAcc and SavAcc to make them more specific to their requirements. 
// Include the necessary methods to achieve the following tasks: 
// a) Accept deposit from a customer and update the balance.
// b) Display the balance.
// c) Compute and deposit interest.
// d) Permit withdrawal and update the balance.
// Check for minimum balance, impose penalty, if necessary, and update the balance.


#include<iostream>
using namespace std;
class account
{
string name;
int accno,type,drwal,depo,total,w,bal;
public:
account()
{
accno=0;
type=0;
drwal=0;
depo=0;
total=0;
w=0;
bal=0;
}
void getdata()
{
    cout<<"Enter the details::\n";
    cin.ignore();
    cout<<"Enter the name of the customer: ";
    getline(cin,name);
    cout<<"Enter the account number : ";
    cin>>accno;
    cout<<"Enter the type of account(savings=0, current=1) : ";
    cin>>type;
    cout<<"Enter the balance : ";
    cin>>bal;
}
void display()
{
    cout<<"The name of coustomer is : "<<name<<endl;
    cout<<"The acccount no. is : "<<accno<<endl;
    cout<<"The balance of the customer is : "<<total<<endl;
}
void SavAcc()
{
    if(type==0)
 {
        if(bal<500)
        {
            cout<<"Your balance is under 500 so you have to pay 50 rs. fine";
            bal=bal-50;
            cout<<"After the fine your balance is::"<<bal;
        }
    }
    else
    {
        cout<<"You will not charged because you have current account ";
    }
}
void CrrAcc()
{
    if(type==1)
    {
        cout<<"Your account is current type so u will get more benefits";
    }
}
void deposite()
{
    int y;
    cout<<"Do you want to deposit(yes=0/no=1)";
    cin>>y;
    if(y==0)
    {
        cout<<"Enter the deposited amount : ";
        cin>>depo;
        bal=bal+depo;
        cout<<"After depositing the amount the balance is : "<<bal<<endl;
    }
    else
    {
        cout<<"Ok! No problem u dont want to deposit : ";
    }
}
void withdrwal()
{
    int y;
    cout<<"Do u want to withdraw(yes=0/no=1) : ";
    cin>>y;
    if(y==0)
    {
        cout<<"Enter the withdrawl amount : ";
        cin>>drwal;
        bal=bal-drwal;
        cout<<"After withdrawing the amount the balance is : "<<bal<<endl;
    }
    else
    {
        cout<<"Ok! No problem u dont want to withdraw"<<endl;
    }
}
void interest()
{
    if(type==0)
    {
        cout<<"Your saving account interest is 3%"<<endl;
        w=(bal*3)/100;
        cout<<"After interest in 1 year::"<<w<<endl;
        total=bal+w;
        cout<<"Update balance is : "<<total<<endl;
    }
    else
    {
        cout<<"Your current account interest is 6%";
        w=(bal*6)/100;
        cout<<"After interest in 1 year::"<<w;
        total=bal+w;
        cout<<"Update balance is : "<<total<<endl;
    }
    }
};

               int main()
{
account p1; 
p1.getdata();
p1.SavAcc();
p1.CrrAcc();
p1.deposite();
p1.withdrwal();
p1.interest();
p1.display();
}
