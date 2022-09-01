
//
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int triarea(int base,int hight){
    double area = (base*hight)/2;
    return area;


}

int main(){
    int base,hight;
    cout<<"Enter triangle base and hight :";
    cin>>base>>hight;
    cout<<fixed<<setprecision(4)<<triarea(base,hight)<<endl;
    return 0;
}

