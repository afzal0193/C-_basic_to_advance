#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int chk_year;
    printf("Input a year");
    scanf("%d",&chk_year);
    if ((chk_year%400)==0){
        cout<<chk_year<<" is leap year"<<endl;
    }
    else if (chk_year %100==0){
        cout<<chk_year<<" is not a  leap year"<<endl;
    }
    else if(chk_year %4==0){
        cout<<chk_year <<" is a leap year"<<endl;
    }
    else{
        printf("%d is not a leap year\n",chk_year);
    }

    return 0;
}
