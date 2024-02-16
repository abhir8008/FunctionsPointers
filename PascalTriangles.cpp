#include<iostream>
using namespace std;


int fact(int n)
{
    int prod = 1;
    for(int i =1;i<=n;i++)
    {
        prod = prod*i;

    }
    return prod;
}

int ncr(int n, int r)
{
    int ncr;
    ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main()
{
    int n;
    cout<< "enter the number: ";
    cin>> n;
    for (int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            cout<< " ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}