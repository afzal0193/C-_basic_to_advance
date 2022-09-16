//find missing number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find_missing(int nums[],int n){

    int temp[n+1];
    int i;
    for(int i =0;i<=n;i++){
        temp[i] = 0;

    }

    for(int i =0;i<n;i++){
        temp[nums[i]-1] = 1;
    }
    int ans =0;
    for(int i =1;i<n;i++){
        if(temp[i]==0){
            ans = ans +1;
        }
    }
    cout<<ans<<endl;

}

int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    find_missing(nums,n);

    return 0;
}
