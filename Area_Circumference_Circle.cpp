//Area and circumference of a circle
#include <iostream>
using namespace std;

const float pie= 3.14;

void areaOfCircle(float radius);
void circumferenceOfCircle(float radius);

int main(){
    float radius;
    cout<<"Enter the radius of a circle : ";
    cin>>radius;
    areaOfCircle(radius);
    circumferenceOfCircle(radius);

    return 0;
}

void areaOfCircle(float radius){
    float area = pie * radius * radius;
    cout<<"\nThe area of a circle with radius "<< radius <<" is : "<<area<<endl;
    return;
}
void circumferenceOfCircle(float radius){
    float circumference = 2 * pie * radius;
    cout<<"\nThe circumference of a circle with radius "<< radius<<" is : "<<circumference<<endl;
    return;
}