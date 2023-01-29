// WAP to add, multiply and transpose two matrices using operator overloading.
// Use dynamic memory allocation: new, delete. 
// Also provide suitable input and output functions.

#include <iostream>
using namespace std;

class Matrix
{
    int **ar;
    int r,c;
    public:
    Matrix();
    Matrix(int a,int b);
    void input();
    void display();
    Matrix operator+(Matrix m);
    Matrix operator*(Matrix m);
    void transpose(Matrix m);
};
Matrix:: Matrix()
    {
        r=0;
        c=0;  
    }
Matrix:: Matrix(int a, int b)
    {
        r=a;
        c=b;
        ar=new int *[r];
        for(int i=0;i<r;i++)
        ar[i]=new int[c];
    }
void Matrix::input()
{
    for(int i=0;i<r;i++)
    {
        cout<<"Enter elements of "<<(i+1)<<" row"<<endl;
        for(int j=0;j<c;j++)
        cin>>ar[i][j];
    }
}
void Matrix::display()
{
   for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<ar[i][j]<<" ";
        cout<<endl;
    }
}
Matrix Matrix::operator+(Matrix m)
{
    if(r!=m.r && c!=m.c)
    {
        cout<<"Matrix addition NOT POSSIBLE"<<endl;
        Matrix res;
        return res;
    }
       Matrix temp(r,c);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                temp.ar[i][j]=ar[i][j]+m.ar[i][j];
        }
        return temp;
}
Matrix Matrix::operator*(Matrix m)
{
    if(c!=m.r)
    {
        cout<<"Matrix Multiplication NOT POSSIBLE"<<endl;
        Matrix temp;
        return temp;
    }
    Matrix temp(r,m.c);
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <m.c; j++)
        {
            int x = 0;
            for (int k = 0; k < m.c; k++)
            {
                x += ar[i][k] * m.ar[k][i];
            }
            temp.ar[i][j] = x;
        }
    }
    return temp;
}
void Matrix::transpose(Matrix m)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        this->ar[i][j]=m.ar[j][i];
    }
}
int main()
{ 
    int a1,b1,a2,b2;
    cout<<"Enter the rows and columns of 1st matrix"<<endl;
    cin>>a1;
    cin>>b1;
    Matrix obj1(a1,b1);
    obj1.input();
    cout<<"Enter the rows and columns of 2nd matrix"<<endl;
    cin>>a2;
    cin>>b2;
    Matrix obj2(a2,b2);
    obj2.input();
    Matrix obj3= obj1.operator+(obj2);
    cout<<endl<<endl;
    cout<<"Addition of the two matrices are:"<<endl;
    obj3.display();
    obj3=obj1.operator*(obj2);
    cout<<"Multiplication of the two matrices are:"<<endl;
    obj3.display();
    Matrix t1(b1,a1);
    t1.transpose(obj1);
    cout<<"Transpose of 1st matrix is:"<<endl;
    t1.display();
    Matrix t2(b2,a2);
    t2.transpose(obj2);
    cout<<"Transpose of 2nd matrix is:"<<endl;
    t2.display();
}
