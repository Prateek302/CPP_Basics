#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }

    int j=1;
    for(;j<=n;j++){
        cout<<j<<endl;
    }

    int k=1;
    for(;k<=n;){
        cout<<k<<endl;
        k++;
    }

    int l=1;
    for(;;){
        if(l<=n){
            cout<<l<<endl;
        }
        else{
            break;
        }
        l++;
    }

         



}