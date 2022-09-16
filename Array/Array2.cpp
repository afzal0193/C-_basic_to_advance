#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_maxvalue(int num[],int n){   //find max_value function /
    int max_value =*max_element(num,num+n);

    return max_value;
}
int min_value(int num[],int n){   //find min_value function
    int min_value = *min_element(num,num+n);
    cout<<min_value<<endl;
    return 0;

}

// Driver code

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];

    }
    int value = find_maxvalue(arr,n);
    cout<<"max value is: ";
    cout<<value<<endl;
    cout<<"min value is: ";
    cout<<min_value(arr,n);

    return 0;
}
