// Given two numbers a and b, write a program using functions to print all the odd numbers between them.

#include <iostream>

using namespace std;

void print_odd_numbers(int lower_limit, int upper_limit);

int main(){
    int lower_limit, upper_limit;
    cout<<"Enter your lower limit: ";
    cin>>lower_limit;
    cout<<"Enter your upper limit: ";
    cin>>upper_limit;

    print_odd_numbers(lower_limit, upper_limit);

    return 0;
}
void print_odd_numbers(int lower_limit, int upper_limit){
    int iterator;
    for(iterator=lower_limit; iterator<=upper_limit; iterator++){
        if(iterator%2==1){
            cout<<iterator;
        }
        else{
            cout<<" ";
        }
        //iterator%2!=0 ? iterator : cout<<" " ;
    }
}