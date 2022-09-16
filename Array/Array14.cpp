#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void replace_element(int nums[],int n){
    // if there have 1 elements
    if(n<=1){
        return ;
    }

    else{
        int preveus_element = nums[0];
        nums[0] = nums[0]*nums[1];
        for(int i=0;i<n;i++){
            int current_value = nums[i];
            nums[i] = preveus_element * nums[i+1];
            preveus_element = current_value;

        }
        nums[n-1] = preveus_element*nums[n-1];
    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    replace_element(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}
