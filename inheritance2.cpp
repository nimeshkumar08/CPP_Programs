// Multiple Inheritance: Start with the publication, book, and tape classes of last exercise.
// Add a base class sales that holds an array of three floats so that it can record
// the dollar sales of a particular publication for the last three months.
// Include a getdata() function to get three sales amounts from the user,
// and a putdata() function to display the sales figures.
// Alter the book and tape classes so they are derived from both publication and sales.
// An object of class book or tape should input and output sales data along with its other data.
// Write a main() function to create a book object and a tape object and exercise their input/output capabilities.
	
#include <iostream>
using namespace std;
class publication
{
    public:
    string title;
    float price;
    void getdata()
    {
        cin.ignore();
        cout<<"Enter the title of the publication : ";
        getline(cin, title);
        cout<<"Enter the price of the publication : ";
        cin>>price;
    }
    void putdata()
    {
        cout<<"\nThe title of the publication is : "<<title;
        cout<<"\nThe price of the publication is : "<<price;
    }
};
class sales
{
    int sell[3];
    public:
    void getdata()
    {
        for(int i=1; i<=3; i++)
        {
        cout<<"Enter the sell of the "<<i<<" month:"<<endl;
        cin>>sell[i];
        }
    }
    void putdata()
    {
        for(int i=1; i<=3; i++)
        {
            cout<<"The sell of the "<<i<<" month is: "<<sell[i]<<endl;
        }
    }
};
class book:public publication, public sales
{
    public:
    int page_count;
    void getdata()
    {
        cout<<"Enter the number of pages : ";
        cin>>page_count;
    }
    void putdata()
    {
        cout<<"\nThe number of pages is : "<<page_count<<endl;
    }
};
class tape:public publication, public sales
{
    public:
    float minutes;
    void getdata()
    {
        cout<<endl;
        cout<<"Enter the play time in minutes : ";
        cin>>minutes;
    }
    void putdata()
    {
        cout<<"The play time in minutes is : "<<minutes;
    }
};
int main()
{
    book b1;
    b1.publication::getdata();
    b1.getdata();
    b1.sales::getdata();
    b1.publication::putdata();
    b1.putdata();
    b1.sales::putdata();
    tape t1;
    t1.getdata();
    b1.publication::putdata();
    b1.putdata();
    b1.sales::putdata();
    t1.putdata();
}