// WAP to overload a function Add as 
// char* Add(char, char), char* Add(char, char*), char* Add(char*, char) 
// to perform concatenation according as the arguments.
// cout<< Add(‘x’ ,’y’);                    would print ‘xy’
// cout<< Add(‘a’, “ Country”);             would print ‘a Country’
// cout<< Add( “How are “, ‘U’);            would print ‘How are U’

#include<iostream>
using namespace std;
class concat
{
    public:
    char* Add(char x,char y)
    {
        char *p;
        p=new char[2];
        *p=x;
        *(p+1)=y;
        return p;
    }
   char* Add(char x,const char* y)
    {
        char *p=new char [15];
        
        *p=x;
        *(p+1)=' ';
        int k=2;
        int i=0;
        while(*(y+i)!='\0')
        {
            *(p+k)=*(y+i);
            i++;
            k++;
        }
        return p;
    }
    char* Add(const char* x,char y)
    {
        char *p=new char[15];
        int i=0;
        while(*(x+i)!='\0')
        {
            *(p+i)=*(x+i);
            i++;
        }
        *(p+i)=' ';
        i++;
        *(p+i)=y;
        return p;
    }
};
int main()
{
    concat c1;
    cout<<endl<<c1.Add('x','y');
    string s1="Country";
   const char* st1=s1.c_str();
    cout<<endl<<c1.Add('a',st1);
    string s2= "How are";
    const char* st2=s2.c_str();
    cout<<endl<<c1.Add(st2,'U');
    return 0;
}
