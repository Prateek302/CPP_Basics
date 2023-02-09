#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int a=0,b=1, c=2; a>=0 && b>=1 && c>=2; a--,b--,c--){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

}