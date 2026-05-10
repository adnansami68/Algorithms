#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;

    cout<<"Enter Number : "<<endl;
    cin>>n;

    if(n==0){
        count = 1; 
    }else{
        while(n!=0){
            n= n/10;
            count++;
        }
    }
    cout<<"Digits : "<<count<<endl;
}
