#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Driver code

int main(){
    int a,b,c,ans;
    cout<<"Enter three number a , b & c:";
    cin>>a>>b>>c;
    ans = (a>=b ? (a>=c ? a:c): (b>=c ? b:c));
    cout<<"the max number is : "<<ans<<endl;

    return 0;
}
