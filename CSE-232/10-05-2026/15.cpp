#include<iostream>
using namespace std;

int main(){

    int n1 , n2;

    cout<<"Enter a Number : "<<endl;
    cin>>n1;

    cout<<"Enter  a Number :"<<endl;
    cin>>n2;

    int sum= n1+n2;
    int sub= n1-n2;
    int multi=n1*n2;
    int div= n1/n2;

    cout<<"Sum is :"<<sum<<endl;
    cout<<"Sub is :"<<sub<<endl;
    cout<<"Multi is: "<<multi<<endl;
    cout<<"Divide is : "<<div<<endl;

    return 0;

}