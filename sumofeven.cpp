#include<iostream>
using namespace std;

int main(){
    int a;
    int sum=0;
    int i=0;

    cin>>a;

    while(i<=a){
        sum=sum+i;
        i=i+2;
    }
    cout<<"Sum of first"<<a<<" Even Numbers is :"<<sum;
    
}