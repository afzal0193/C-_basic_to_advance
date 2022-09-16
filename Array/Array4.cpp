#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

void three_largest_number(int arr[],int arr_size){
    int first,second,third;
    first = second = third = 0;
    for(int i=0;i<arr_size;i++){
        if(first<arr[i]){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(second <arr[i]){
            third = second;
            second =arr[i];

        }
        else{
            third = arr[i];
        }
    }
    cout<<"First three largest number is :"<<first<<" "<<second<<" "<<third;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    three_largest_number(arr,n);

    return 0;
}
