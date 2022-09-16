

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// second smallest number
int find_Second_Smallest(int array_num[],int n){
    int smallest_num,second_smallest_num;
    if(n<2){
        cout<<"INVALID"<<endl;
    }
    else if(n ==2){
        int first_value = array_num[0];
        int second_value = array_num[1];
        if (first_value>second_smallest_num){
            smallest_num = second_value;
            second_smallest_num = first_value;
        }
        else{
            second_smallest_num = first_value;
            smallest_num = = second_value;
        }

    }
    else{
        for(int i =0;i<n;i++){
            if (smallest_num < arr[i]){
                second_smallest_num = smallest_num;
                smallest_num = arr[i];
            }
            else{
                second_smallest_num = arr[i];
            }
        }
    }
}
//This is Driver code of Above code ..


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<=n;i++){
        cin>>arr[i];
    }

}
