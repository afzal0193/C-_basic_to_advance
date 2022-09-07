#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  main(){
    float mark;
    cin>>mark;
    if(mark>=80 && mark<=100){
        cout<<"A+"<<endl;
    }
    else if(mark <80 && mark >=70){
        cout<<"A"<<endl;
    }
    else if(mark <70 && mark>=60){
        cout<<"A-"<<endl;
    }
    else if(mark <60 && mark >=50){
        cout<<"B"<<endl;
    }
    else if(mark<50 && mark >=40){
        cout<<"C"<<endl;
    }
    else if(mark<33 && mark >=0){
        cout<<"F"<<endl;
    }
    return 0;

}
