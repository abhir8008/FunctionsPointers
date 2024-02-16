#include<iostream>
using namespace std;

int swap(int& x, int& y)  //adding "&" we are taking value with address from main
{
 int temp=x;
    x=y;
    y=temp;
    //return(y,x);
}

int main()
{
    int x=4;
    int y= 5;
    cout<< "x= "<<x<<" "<<"y= "<<y<<endl;
    swap(x,y);
    cout<< "x= "<<x<<" "<<"y= "<<y<<endl;
}