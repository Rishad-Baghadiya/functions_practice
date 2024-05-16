//can a person cast a vote or not

#include <iostream>
using namespace std;
void checkAge(int age);
int main(){
    int age;
    cout<<"Enter your age to check if you are eligible for voting or not: ";
    cin>>age;

    checkAge(age);

    return 0;
}

void checkAge(int age){
    age>=18 ? cout<<"Yes you can cast a vote\n" : cout<<"No, you are under age to cast a vote\n";
}