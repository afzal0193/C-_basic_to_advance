#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    int temp;
    printf("input days temperature");
    scanf("%d",&temp);
        if(temp<0){
            cout<<"Freezing cold weather \b"<<endl;
        }
        else if(temp <10){
            printf("Very cold Weather");

        }
        else if (temp <20){
            printf("cold Weather");

        }
        else if (temp <30){
            printf("Normal in temp.\n");
        }
        else if(temp<40){
            printf("its Hot .\n");
        }
        else{
            printf("very Hot.\n");
        }
        return 0;
}
