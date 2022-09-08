#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
    char grd;
    cin>>grd;
    if(grd =='E'){
        cout<<"Exellant"<<endl;
    }
    else if(grd =='V'){
        cout<<"Very good"<<endl;
    }
    else if(grd =='G'){
        cout<<"Good"<<endl;
    }
    else if(grd =='A'){
        cout<<"Average"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }

    return 0;
}
