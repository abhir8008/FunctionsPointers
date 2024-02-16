#include<iostream>
using namespace std;

int fact(int a)
{
    int prod = 1;
    for(int i=1;i<=a;i++)
    {
        prod = prod*i;
    }
    return prod;
}

int main()
{
    cout<< "enter n: ";
    int n, r;
    cin>> n;
    cout<< "enter r: ";
    cin>> r;
    int comb =1; 
    comb= fact(n)/(fact(r)*fact(n-r));

    cout<< "Combination: "<<comb<< endl; 
    int perm;
    perm = fact(n)/fact(n-r);
    cout << "Permutation: " << perm;
}