#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int convert(int munits){
    int result = munits*60;
    return result;
}
int main(){
    int munits;
    cin>>munits;

    cout<<convert(munits)<<endl;

    return 0;
}
