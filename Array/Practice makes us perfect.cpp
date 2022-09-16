#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int value =0;
    if (a>=10){
        value++;
    }
    if(b>=10){
        value++;
    }
    if(c>=10){
        value++;
    }
    if(d>=10){
        value++;
    }
    cout<<value<<endl;

    return 0;

}
