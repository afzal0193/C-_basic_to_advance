#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Klargeset(int nums[],int n,int k){
    sort(nums,nums+n);
    for(int i =0;i<n;i++){
            if (k ==i){
                cout<<nums[i]<<endl;
            }

    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    Klargeset(arr,n,3);

    return 0;

}
