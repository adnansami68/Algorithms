#include<iostream>
using namespace std;

int main(){

    int n;
    int sum = 0;

    cout<<"Enter Number : "<<endl;
    cin>>n;

    if(n<0){
        n = -n;
    }else{
        while(n!=0){
            int lastdigit = n%10;
            sum = sum + lastdigit;
            n = n/10;
        }
    }
    cout<<"Sum of Digit : "<<sum<<endl;
}