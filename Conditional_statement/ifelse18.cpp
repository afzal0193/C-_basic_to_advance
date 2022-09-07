//Check whether a character is an alphabet, digit or special character
#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    char ch;
    cout<<"input a character :";
    scanf("%c",&ch);
    //*Checks whether it is an alphabet
    if (((ch>='a'&& ch<='z')) || ((ch>='A' && ch <='Z'))){
        printf("this is an alphabet");
    }
    else if (ch >='0' && ch<='9'){
        cout<<"digit"<<endl;
    }
    else{
        printf("This is a speacail character");
    }
    return 0;
}
