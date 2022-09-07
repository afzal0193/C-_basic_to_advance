// leap year or not ..
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cout<<"Enter a year for check leap year or not :";
    cin>>year;
    if (year % 4 ==0 && year%100 !=0){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"not leap year"<<endl;
    }

    return 0;
}
