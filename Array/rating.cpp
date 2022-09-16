#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
    }
    int count_value = 0;
    int i=0;
    while(i<n){
        if(arr[i]>=1000){
            count_value +=1;
        }
        i++;

    }
    cout<<count_value<<endl;
}
}

