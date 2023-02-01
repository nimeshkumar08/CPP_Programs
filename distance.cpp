// Create a class Distance{feet, inches}: operations- default constructor,
// one-argument constructor (Distance(int), Distance(float)), two-argument constructor,
// copy constructor, input, display, add, convert to meter.
// (use operator overloading). Overload casting operators to convert 
// class Distance to feet (float) or inches (integer) and
// to another class Meter {mt, cm}. Also implement >, >=, <, <=, <<, >> and != operator

#include<iostream>
using namespace std;

class Metre;

class Distance
{
	int feet;
	float inch;
	public:
		Distance()
		{
			feet=0;
			inch=0;
		}
		Distance(float a)
		{
			inch=a;
		}
		Distance(int b)
		{
			feet=b;
		}
		Distance(float a,int b)
		{
			inch=a;
			feet=b;
		}
		Distance(Distance const &obj)
		{
			feet=obj.feet;
			inch=obj.inch;
		}
		void input()
		{
			cout<<"\nEnter the feet part : ";
			cin>>feet;
			cout<<"Enter the inch part : ";			
			cin>>inch;
		}
		void display()
		{
			if(inch>=12)
			{
				int a= inch/12;
				feet+=a;
				inch=inch-(a*12);
			}
			cout<<"Distance in feet and inches = "<<feet<<" feet "<<inch<<" inch.\n";
		}
		Distance operator + (Distance obj)
		{
			Distance temp;
			temp.feet=feet+obj.feet;
			temp.inch=inch+obj.inch;
			return temp;	
		}
		friend double operator * (Distance &obj,double x);
		
		operator float()
		{
			float a=(feet*12)+inch;
			return a;
		}
		operator int()
		{
			if(inch>=12)
			{
				int a= inch/12;
				feet+=a;
			}
			return feet;
		}
		operator Metre();
};

class Metre
{
	int met;
	float centi;
	public:
		Metre()
		{
			met=0;
			centi=0;
		}
		Metre(int a)
		{
			met=a;
		}
		Metre(float b)
		{
			centi =b;
			met=centi/100;
			centi=met*100-centi;
				
		}
		Metre(int a,float b)
		{
			met=a;
			centi =b;
		}
		void input()
		{
			cout<<"Enter the metre part : ";
			cin>>met;
			cout<<"Enter the centimetre : ";
			cin>>centi;
		}
		void display()
		{
			cout<<"Distance in metre and centimetre = "<<met<<" m "<<centi<<" cm.\n";		
		}
};

double operator * (Distance &obj,double x)
{
	float a=(obj.feet*12) + obj.inch;
	double b=a*x;
	return b; 	
}

Distance::operator Metre()
{
	float a=(feet*12)+inch;
	float b=a*2.54;
	return Metre(b);
}

int main()
{
	Distance A;
	cout<<"Distance 1 :\n-----------------";
	A.input();
	Distance B;
	cout<<"Distance 2 :\n-----------------";
	B.input();
	Distance C=A+B;
	cout<<"Total ";
	C.display();
	
	cout<<"\nTotal distance in metre : ";
	double a=C*0.0254;                                 //total distance converted to inches then to metre by multiplying 0.0254
	cout<<a<<" m\n";

	int x,feet;
	float inches;
	cout<<"\nEnter 1 to change Total Distance  to full feet OR enter 2 to change to full inches\nEnter your choice : ";
	cin>>x;
	switch(x)
	{
		case 1:
			feet=(int)C;
			cout<<"\nDistance 1 in feet (only integer part) : "<<feet<<" feet\n";
			break;
		case 2:
			inches=(float)C;
			cout<<"\nDistance 1 in inches : "<<inches<<" inches\n";
			break;
		default:
			cout<<"Invalid Choice";
	}  
    
	Metre D=C;
	cout<<"Total ";
	D.display();
	return 0;
}