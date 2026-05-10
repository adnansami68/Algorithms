#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;
    cout<<"Enter Number : "<<endl;
    cin>>n;

    for(int i=1; i<=n ;i++){
        factorial= factorial * i;
        }

        cout<<"The Factorial is: "<<factorial<<endl;
    }
    

