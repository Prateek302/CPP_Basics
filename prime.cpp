#include<iostream>
using namespace std;

int main(){
    int a;
    int i=2;
    cin>> a;
    while(i<a){
        if(a%i==0){
            cout<<"Not Prime for"<<i;
        }
        else{
            cout<<"Prime for"<<i;
        }
    i=i+1;
    }
}