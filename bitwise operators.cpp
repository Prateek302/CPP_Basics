#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
      //bitwise operators
    cout<<" a&b "<<(a&b)<<endl;
    cout<<" a|b "<<(a|b)<<endl;
    cout<<" ~a "<<~a<<endl;
    cout<<" a^b "<<(a^b)<<endl;

      //shift operator
    cout << " a>>b "<< (17>>1)<< endl;
    cout<< " a>>b "<<(17>>2)<<endl;
    cout<< " a<<b "<<(19<<1)<<endl;
    cout<< " a>>b "<<(21<<2)<<endl;

    

    
}