//This program will print the squares of 5 inputs provided by the user

#include<iostream>
using namespace std;

void squareFunc(float input);

int main(){
    float num, floatNum;
    for(num=1; num<=5; num++){
        cout<<"\nenter your input "<< num <<" to find its square: ";
        cin>>floatNum;
        squareFunc(floatNum);
    }
    return 0;
}

void squareFunc(float input){
    float square = input*input;
    cout<<"the square of "<< input<<" is : "<<square<<endl;
    return;
}