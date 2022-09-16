#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//find maxmum value form array ...


int find_maxvalue(int arr[],int n){    //for find a max value from array .
    int max_value;
    for(int i=0;i<n;i++){
        if(max_value<arr[i]){
            max_value =arr[i];
        }
    }
    return max_value;


}
/*

int min_value(int arr,int n){    //find min value form array .
    int min_value=0;
    for(int i =0;i<n;i++){
        if(min_value>arr[i]){
            min_value = arr[i];
        }
    }
    return min_value;
}
*/

//This is driver code form this function
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int value = find_maxvalue(arr,n);
    cout<<"The maximum value is :"<<value<<endl;
    int value1 = min_value(arr,n);

    cout<<"The minmum vlaue is  :"<<value1<<endl;

    return 0;
}

