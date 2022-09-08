#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
    char input_char;
    cout<<"Enter a character :";
    cin>>input_char;
    if((input_char<='a' && input_char >='Z') || (input_char <='A' && input_char>='Z')){
        cout<<"This is alphabet"<<endl;
    }
    else if(input_char<='9' && input_char>='0'){
        cout<<"This is digit"<<endl;

    }
    else{
        cout<<"This is spacal character"<<endl;
    }

    return 0;
}
