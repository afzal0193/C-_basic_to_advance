#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    int max_value = (a>b)? a:b;
    cout<<"the max value is : "<<max_value<<endl;

    return 0;
}
