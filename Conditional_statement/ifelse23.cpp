#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"input all data for Triangle area "<<endl;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    if ((a+b)>c && (b+c)>a && (c+a)>b){
        float s = (a+b+c)/2;
        float area = (s*(s-a)*(s-b)*(s-c))*0.5;
        cout<<"the Area is :";
        cout<<area<<endl;

    }
    else{
        cout<<"impossable"<<endl;
    }
    return 0;

}
