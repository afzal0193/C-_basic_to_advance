#include<iostream>
#include<bits/stdc++.h>
//Write a C++ program to find the largest three elements in an array.
using namespace std;

void Three_largest(int arr[],int arr_size){
    int first,second,third;

    if (arr_size<3){
        cout<<"invalid"<<endl;
    }
    else{
        for(int i =0;i<arr_size;i++){
            if (first <arr[i]){
                third = second;
                second = first;
                first = arr[i];

            }
            else if(second<arr[i]){
                third = second;
                second = arr[i];
            }
            else{
                third = arr[i];
            }

        }
    }
    cout<<"First three largest value is : "<<first<<" "<<second<<" "<<third<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    Three_largest(arr,n);

    return 0;
}
