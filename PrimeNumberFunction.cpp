//Given two numbers a and b, write a program to print all the prime numbers present between a and b.

#include <iostream>

using namespace std;

void print_prime_numbers(int a, int b);
bool prime(int num);

int main(){
    int lower_limit, upper_limit;
    cout<<"Enter your lower limit: ";
    cin>>lower_limit;
    cout<<"Enter your upper limit: ";
    cin>>upper_limit;

    print_prime_numbers(lower_limit, upper_limit);

    return 0;
}

void print_prime_numbers(int a, int b){
    int iterator, divisor;
    for (iterator = a ; iterator<b ; iterator++){
        if(prime(iterator)){
            cout<< iterator<< " ";
        }
    }    
    return;
}

bool prime(int num){
    if(num <= 1) return false;
    if(num==2) return true;
    // if(num%2 ==0) return false;
    // for(int divisor = 3; divisor <=num/2; divisor+=2){
    //     if(num%divisor ==0) return false;
    // }
    for(int divisor = 2;  divisor<=num/2 ; divisor++){
        if(num%divisor == 0) return false;
    }
    return true;

}