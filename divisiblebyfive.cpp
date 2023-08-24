//Take Positive integer input and tell if it divisible by 5 or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5==0){
        cout<<"It is Divisible by Five(5)";
    }
    else{
        cout<<"It is Not Divisible by Five";
    }
    return 0;
}