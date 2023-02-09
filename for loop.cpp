#include<iostream>
using namespace std;

int main(){

    // for(int i=0; i<=5; i++){
    //     cout<<i<<" ";
    //     i++;
    // }

    // for(int j=0; j<=5; j--){
    //     cout<<j<<" ";
    //     j++;
    //     break;
    // }
    
    //duplicate find by XOR bitwise

    // int arr[]= {4,5,3,9,5,3,9};
    // int n=7;
    // int res=0;
    // int i;
    // for(i =0;i<n;i++){
    //     res = res ^ arr[i];
    // }
    // cout<< res;

    // for (int k=0; k<=15; k+=2){
    //     cout<<k<<" ";

    //     if(k&1){
    //         continue;
    //     }
    //     k++;
    // }

    for(int i=0; i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}