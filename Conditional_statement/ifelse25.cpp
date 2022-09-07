#include<iostream>
//ASCII code Program in C++ (C Plus Plus)
using namespace std;

int main(){
    char charvalue;
    cin>>charvalue;
    int out_value = charvalue;

    if(out_value>=97 && out_value>=122){
        cout<<"You Entered a small latter"<<endl;
    }
    else if(out_value >=65 && out_value<=90){
        cout<<"you Are Entered a capital latter"<<endl;
    }
    else if (out_value<=57 && out_value>=47){
        cout<<"you are Entered digit"<<endl;
    }
    else if(out_value >=0 && out_value<=47
            || out_value>=54 && out_value<=64
            || out_value>=91 && out_value<=96
            || out_value >=123 && out_value<=127 ){
                cout<<"you have entered a special Character"<<endl;
            }

    return 0;
}
