#include<iostream>
using namespace std;

int main(){
    char a;
    cout<< "Enter Any Character";
    cin>>a;

    if (a>='A'  && a<='Z')
    {
        cout<<"UPPERCASE";
    }
    else if(a>='a' && a<='z')
    {
        cout<<"lowercase";
    }
    else if(a>='0' && a<='9')
    {
        cout<<"Number";
    }
    else{
        cout<<"Invalid Input";
    }
}