//Separate even and odd numbers of an array of integers.
//Put all even numbers first, and then odd numbers
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y){
    int temp = *x;
    *x  = *y;
    *y = temp;
}
void Evenodd(int nums[],int n){
    int left_num = 0,right_num =n-1;

    while(left_num<right_num){
        while(nums[left_num]%2 ==0 && left_num<right_num){
            left_num++;
        }
        while(nums[right_num]%2 ==1 && left_num <right_num){
            right_num --;

        }

    if(left_num<right_num){
        swap(&nums[left_num],&nums[right_num]);
        left_num++;
        right_num--;
    }
 }

}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Evenodd(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}
