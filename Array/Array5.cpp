
#include<iostream>
#include<bits/stdc++.h>
// lenear_searching..
using namespace std;

int lenear_search(int arr[],int n,int target){
    for(int i =0;i<n;i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int target_value;
    cout<<"Enter your Target value :";
    cin>>target_value;
    cout<<lenear_search(arr,n,target_value);
    return 0;

}

