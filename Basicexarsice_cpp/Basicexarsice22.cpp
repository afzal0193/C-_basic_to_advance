// remainder
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int remainder(int a,int b){
    return a%b;

}

int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    cout<<"the remainder value is:";
    cout<<remainder(a,b);
    return 0;
}
