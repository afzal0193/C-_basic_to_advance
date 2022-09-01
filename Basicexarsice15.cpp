#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float val1;
    float val2;
    cin>>val1>>val2;

    double sum = (val1*3.5) + (val2*7.5);
    double value = sum/(3.5+7.5);
    cout<<"MEDIA = "<<fixed<<value<<setprecision(5)<<endl;

    return 0;

}
