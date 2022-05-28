#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE //not part of code, used to beautify input output
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}