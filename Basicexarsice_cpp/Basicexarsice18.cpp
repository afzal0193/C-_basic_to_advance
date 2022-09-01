//edabit.com problem exarsice
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // print (a+b)**2  value
    cout<<"Enter a and b value: ";

    int a,b;
    cin>>a>>b;
    int value = pow(a,2) +2*a*b+pow(b,2);

    cout<<"The value of (a+b)**2 is: "<<value<<endl;

    return 0;
}


