#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int first,second;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>first>>second;
        if(first<second){
            cout<<"FIRST"<<endl;
        }
        else if(first ==second){
            cout<<"ANY"<<endl;
        }
        else{
            cout<<"SECOND"<<endl;
        }

    }
    return 0;
}
