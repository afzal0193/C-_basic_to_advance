//Check whether an alphabet is a vowel or consonant
#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character for check vowel or consonant:";

    scanf("%c",&ch);

    if ((ch=='a' || ch =='e' || ch =='o'||ch =='i'||ch =='u') || (ch =='A' || ch =='E' || ch =='I'|| ch =='O'||ch =='U')){
        cout<<"vowel"<<endl;
    }
    else if (( ch>='A'&& ch >='Z') || (ch >='a' && ch<='z')){
        cout<<"consonant"<<endl;
    }
    else{
        cout<<"it is not alphabet"<<endl;
    }

    return 0;

}
