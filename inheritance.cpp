// More on Inheritance: Imagine a publishing company that markets
// both book and audio cassette versions of its works. 
// Create a class publication that stores the title (a string) and price (type float) of a publication.
// From this class derive two classes: book, which adds a page count (type int), and tape,
// which adds a playing time in minutes (type float). 
// Each of these three classes should have a getdata() function
// to get its data from the user at the keyboard, and a putdata() function to display its data.
// Write a main() program to test the book and tape classes by creating instances of them,
// asking the user to fill in data with getdata() and then displaying the data with putdata().

#include <iostream>
using namespace std;
class publication
{
    public:
    string title;
    float price;
    void getdata(){
        cin.ignore();
        cout<<"Enter the title of the publication : ";
        getline(cin, title);
        cout<<"Enter the price of the publication : ";
        cin>>price;
    }
    void putdata(){
        cout<<"\nThe title of the publication is : "<<title;
        cout<<"\nThe price of the publication is : "<<price;
    }};
class book:public publication
{
    public:
    int page_count;
    void getdata() {
        cout<<"Enter the number of pages : ";
        cin>>page_count;
    }
    void putdata(){
        cout<<"\nThe number of pages is : "<<page_count<<endl;
    }};
class tape:public publication
{
    public:
    float minutes;
    void getdata(){
        cout<<endl;
        cout<<"Enter the play time in minutes : ";
        cin>>minutes;
    }
    void putdata(){
        cout<<"The play time in minutes is : "<<minutes;
    }};
int main()
{
    book b1;
    b1.publication::getdata();
    b1.getdata();
    b1.publication::putdata();
    b1.putdata();
    tape t1;
    t1.getdata();
    b1.publication::putdata();
    b1.putdata();
    t1.putdata();
}
