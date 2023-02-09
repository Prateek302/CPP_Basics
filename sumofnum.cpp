#include<iostream>
using namespace std;

int main(){
    int a,i=1,sum=0;
    cin>>a;
    
    while(i<=a){
        sum=sum+i;
        i=i+1;
    }
    cout << "Value of sum is " << sum <<endl;
}