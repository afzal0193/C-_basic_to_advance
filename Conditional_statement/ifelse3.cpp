#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers a , b & c:"<<endl;
    cin>>a>>b>>c;
    if (a>=b){
        if (a>=c){
            cout<<"a is big"<<endl;
        }
        else{
            cout<"c is big"<<endl;
        }
    }
    else{
        if (b>=c){
            cout<<"b is big"<<endl;
        }
        else{
            cout<<"C is big"<<endl;
        }
        return 0;
}
