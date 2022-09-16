#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void  swapvalue(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}
void EvenOdd(int nums[],int n;){

    int left = 0,right = n-1;
    while(left <right){
        while(nums[left]%2==0 && left<right){
            left++;

        }
        while(nums[left]%2 ==1 && left<right){
            right--;
        }

        if(left < right){
            swap(nums[left],nums[right]);
        }

    }

}

int main(){
    int n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    EvenOdd(arr,n);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
