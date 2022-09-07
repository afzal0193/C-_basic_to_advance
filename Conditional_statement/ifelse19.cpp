#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character for check it is character digit of spacial mark:";
    scanf("%c",&ch);
    if ((ch >='A' && ch <='Z') || (ch>='a' && ch<='z')){
        cout<<"alphabet"<<endl;
    }
    else if(ch >='0' && ch<='9'){
        cout<<"digit"<<endl;
    }
    else{
        cout<<"spacial character"<<endl;
    }

    return 0;
}
