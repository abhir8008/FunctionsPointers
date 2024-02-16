#include<iostream>
using namespace std;

//in viod retun in option;
// main always in last;

void GOT()
{
    cout<< "hello" <<endl;
    //return;     // return; finish the functions like break
    cout<< "valarmorgolis"<< endl;
}

void Bahubali()
{
    cout<<"Bhau! Bahu!"<<endl;
    GOT();
    return;
}

int main()      //Omly Main function can not be called more than one
{
    GOT();
    cout<<"next Universe"<<endl;
    Bahubali();
    // return 0; in int funtion
}  

