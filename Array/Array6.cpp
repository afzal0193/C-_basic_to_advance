#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void second_largest(int nums[],int arr_size){
    int i,first_element,second_element;

    if(arr_size < 2){
        cout<<"Invalid input "<<endl;
    }
    else{
        first_element = second_element =0;
        for(int i =0;i<arr_size;i++){
            if(first_element <arr[i]){
                second_element = first_element;
                first_element = arr[i];

            }
            else{
                second_element = arr[i];
            }
        }
    }
    cout<<"The second big Element is :"<<second_element<<endl;


}

int main(){
    int n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    second_largest(arr,n);

    return 0;
}
