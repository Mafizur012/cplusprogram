#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>>radius;
    float pi=3.14;
    float area;
    area= pi * radius *radius;
    cout<<"Area of the Circle is: "<<area;
    return 0;
}