// Create a class matrix{row,col}. Overload + and *. 
// Also overload [] to access an element of the matrix.

#include<iostream>
using namespace std;
class matrix
{
    int m,n;
    int arr[10][10],i,j,k;
    public:
    void setdata()
    {
        cout<<"Enter order of matrix :";
        cin>>m>>n;
        arr[m][n];
        cout<<"Enter matrix elements "<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
        }
    }
    matrix operator [](matrix x)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
        }
        cout<<endl<<endl;
    }
    
    matrix operator +(matrix x)
    {
        cout<<"Result of addition :"<<endl;
        matrix y;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
        {
            y.arr[i][j]=arr[i][j]+x.arr[i][j];
        }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
        {
            cout<<y.arr[i][j]<<"\t";
        }
        cout<<endl;
        }
        cout<<endl<<endl;
        return y;
    }
    
    matrix operator *(matrix x)
    {
        cout<<"Result of multiplication :"<<endl;
        matrix l;
        if(n==x.m)
        {
            for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
        {
            l.arr[i][j]=0;
            for(k=0;k<n;k++)
        {
            l.arr[i][j]+=arr[i][k]*x.arr[k][j];
        }
        }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
        {
            cout<<l.arr[i][j]<<"\t";
        }
        cout<<endl;
        }
        }
        else
        cout<<"Matrix multiplication is not possible."<<endl;
        cout<<endl<<endl;
        return l;
        }
};
int main()
{
    matrix m1,m2;
    m1.setdata();
    m2.setdata();
    m1[m2];
    m2[m1];
    m1+m2;
    m1*m2;
    return 0;
}
