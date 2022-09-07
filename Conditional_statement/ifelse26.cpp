#include<iostream>
//C++ Source Code of Gross salary program

#include<bits/stdc++.h>
using namespace std;

int main(){
    int salary,gross,hra,da;
    cout<<"Enter the basic Salary of the employee."<<endl;
    cin>>salary;
    if (salary<=1000){
        da = salary*(20/100);
        hra = salary*(80/100);
        gross = salary + da + hra;
        cout<<"The gross salary to the employee is"<<endl<<gross;

    }
    else if(salary<=2000){
        da = salary*(25/100);
        hra = salary*(90/100);
        gross = salary +da+hra;
        cout<<"The gross Salary of the emoplyee is"<<endl<<gross<<endl;

    }
    else if(salary >2000){
        da =salary *(30/100);
        hra =salary*(95/100);
        gross = salary + da + hra;
        cout<<"the gross salary of employee"<<endl<<gross;
    }
    else{
        cout<<"you have no salary"<<endl;
    }

    return 0;

}
//this is program for salary counter
