//Create a class Fraction {numerator, denominator} to implement addition, subtraction,
//multiplication and compare of two proper fractions. Overload +, -,*, ==.

#include<iostream>
using namespace std;
class fraction
{
	private:
		int nu,deno;
	public:
	void input()
	{
	    cout<<"Enter the numerator : ";
	    cin>>nu;
	    cout<<"Enter the denominator : ";
        cin>>deno;
	}
	void display()
	{
		if(nu==0 || nu==deno)
                                cout<<nu<<endl;
               else
                 cout<<nu<<"/"<<deno;
	}
	void mini()
	{
    	int min;
    	min=(nu<deno)?nu:deno;
    	for(int i=min;i>=1;i--)
    	{
    		if(deno%i==0 && nu%i==0)
    		{
    			nu=nu/i;
    			deno=deno/i;
    			break;
    		}
    	}
	}
	fraction operator*(fraction obj)
	{
		fraction ob;
		ob.nu=nu*obj.nu;
		ob.deno=deno*obj.deno;
		ob.mini();
		return ob;
	}
	fraction operator+(fraction obj)
	{
		fraction ob;
		int temp=(deno*obj.deno)/gcd(deno,obj.deno);
		ob.deno=temp;
		ob.nu=nu*(temp/obj.deno)+obj.nu*(temp/deno);
		ob.mini();
		return ob;
	}
	fraction operator-(fraction obj)
	{
		fraction ob;
		int temp=(deno*obj.deno)/gcd(deno,obj.deno);
		ob.deno=temp;
		ob.nu=nu*(temp/obj.deno)-obj.nu*(temp/deno);
		ob.mini();
		return ob;
	}
	void operator==(fraction f)
    {
       if(nu==f.nu && deno==f.deno)
            cout<<"Fractions are equal"<<endl;
        else
            cout<<"Fractions are not equal"<<endl;
    }
	int gcd(int a,int b)
	{
		if(b==0)
		return a;
		else
		return gcd(b,a%b);
	}
};
int main()
{
	fraction f1,f2,f3;
	cout<<"Enter the first fraction :--------"<<endl;
	f1.input();
	cout<<endl;
	cout<<"Enter the second fraction :--------"<<endl;
	f2.input();
	f1.mini();
	f2.mini();
	f3=f1.operator*(f2);
	cout<<endl<<endl;
	cout<<"The multiplication of the fraction is : ";
	f3.display();
	cout<<endl;
	f3=f1.operator+(f2);
	cout<<"The addition of the fraction is : ";
	f3.display();
	cout<<endl;
	f3=f1.operator-(f2);
	cout<<"The substraction of the fraction is : ";
	f3.display();
	cout<<endl;
	f1.operator==(f2);
	return 0;
}
