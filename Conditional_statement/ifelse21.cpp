//Calculate profit and loss
#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int cprice,sprice,plamt;
    printf("Enter cost price :");
    cin>>cprice;
    printf("Enter Selling Price :");
    cin>>sprice;

    if (sprice>cprice){
        plamt = sprice - cprice;
        cout<<"You can booked your profit amount :"<<plamt<<endl;
    }
    else if(cprice>sprice){
        plamt = cprice - sprice;
        cout<<"you got a loss of amount :"<<plamt<<endl;
    }
    else{
        printf("\n you are running in no profit no loss in the amount ");
    }

    return 0;
}
