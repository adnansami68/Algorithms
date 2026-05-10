#include<iostream>
using namespace std;

int main(){
    int a , b , temp;

    cout<<"Enter a :";
    cin>>a;

    cout<<"Enter b :";
    cin>>b;

    cout<<"Before Swaping : "<<a<<b<<endl;

    temp =  a;
    a    =  b;
    b    = temp;

    cout<<"After Swaping : "<<a<<b<<endl;
}