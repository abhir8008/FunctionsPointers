#include<iostream>
using namespace std;

int main()
{
    int x=4;
    int y= 5;
    cout<< "x= "<<x<<" "<<"y= "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<< "x= "<<x<<" "<<"y= "<<y<<endl;
}