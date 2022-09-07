#include<iostream>
#include<stdio.h>
//Accept the height of a person in centimeter and categorize them
using namespace std;

int main(){
    float h;
    printf("Enter height of a person:");
    cin>>h;
    if(h<150){
        printf("the parson is Dwarf");
    }
    else if((h>=150.0)&&(h<165)){
        printf("the persong is average");
    }
    else if ((h >=165) && (h<=195.0)){
        printf("the person is taller");

    }
    else{
        printf("Abnormal height");
    }

    return 0;

}

