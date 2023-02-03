#include <iostream>
#include<cstring>
using namespace std;
class String
{
    char *str;
    int l;
    public : 
    String(){
        l=0;
        str=new char[100];
    }
    String(int x)
    { 
        string s;
        s=to_string(x);
        l=s.length();
        str=new char [l+1];
        strcpy(str,s.c_str());
    }
    String(string s)
    { 
        l=s.length();
        str=new char[l+1];
        strcpy(str,s.c_str());
    }
    String operator+(String ob)
    { 
        String temp;
        strcpy(temp.str,str);
        strcat(temp.str,ob.str);
        return temp;
    }
    void operator==(String ob)
    { 
        if(strcmp(str,ob.str)==0)
        cout<<"Both are same"<<endl;
        else
        cout<<"Both are not same"<<endl;
    }
    void operator>(String ob)
    {   
        if(strcmp(str,ob.str)==0)
        cout<<"both are same";
        else
        {
            if(strcmp(str,ob.str)>0)
            cout<<"first string is greater"<<endl;
            else
            cout<<"second string is greater"<<endl;
        }
    }
    void operator<(String ob)
    {
        if(strcmp(str,ob.str)==0)
        cout<<"Both are same";
        else
        {
            if(strcmp(str,ob.str)<=0)
            cout<<"First string is smaller"<<endl;
            else
            cout<<"Second string is smaller"<<endl;
        }
    }
    void display()
    {
        cout<<str<<endl;
    }
    void input()
    {
        cout<<"Enter the string : "<<endl;       
        cin>>str;
    }
};

int main()
{
    String ob;
    ob.input();
    String ob1;
    ob1.input();
    cout<<endl;
    ob.display();
    ob1.display();
    ob==ob1;
    ob>ob1;
    ob<ob1;
    String ob2;
    ob2=ob+ob1;
    ob2.display();
}
