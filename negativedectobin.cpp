int main(){
     
    int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    long long aew;
    while(n != 0){

        int bit = n & 1;

        ans = (bit * pow(10,i) ) + ans;

        n= n >> 1;
        i++;
    }
    cout<<"Answer is"<<ans<<endl;
    //find 2's complememnt
    //1's complement
    aew=(~ans);
    //2's complememnt
    aew=aew+1;
    
    cout<<aew<<endl;

}