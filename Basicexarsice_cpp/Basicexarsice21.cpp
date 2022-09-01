#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool issamevalue(int a,int b){
    return a ==b;
}

int main(){
    int a,b;
    cin>>a>>b;
    if (issamevalue(a,b)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}
