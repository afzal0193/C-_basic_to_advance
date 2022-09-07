
#include<bits/stdc++.h>
using namespace std;
// Driver code
int main(){
    int a,b,c,ans;
    cout<<"Enter the three Numbers: ";
    cin>>a>>b>>c;
    ans = (a>=b ? (a>=c ? a:c) : (b>=c ? b:c));
    cout<<ans<<" is big"<<endl;

    return 0;
}
