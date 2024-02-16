#include<iostream>
using namespace std;

int sum(int a, float b)
{
    cout<<"Sum is: "<< a+b;

}

int difference(int a, int b)
{
    return a-b;
}

int main()
{
    int a,b;
    cout<< "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    sum(a,b);
    cout<<endl;
    cout<< "difference is: "<<difference(a,b);
}