#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_smallestmissing_element(int nums[],int start,int end_){
    if(start >end_){
        return end_ + 1;
    }
    if (start !=nums[start]){
        return start;

    }
    int mid = (start + end_)/2;
    if(nums[mid] == mid){
        return find_smallestmissing_element(nums,mid+1,end_);
    }
    return find_smallestmissing_element(nums,start,mid);
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    int start = 0;
    int end_ = n -1;
    int value = find_smallestmissing_element(nums,start,end_);
    cout<<"Missing value is :"<<value<<endl;

    return 0;
}
