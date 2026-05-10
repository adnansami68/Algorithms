#include <iostream>
using namespace std;

int main() {
    int n;
    int n1 = 0, n2 = 1, nextTerm;

    cout<<"Enter a Number:  ";
    cin>>n;

    for(int i=1 ; i<=n; i++){
        if(i == 1){
            cout<<n1<<" ";
        }
        else if(i == 2){
            cout<<n2<<" ";
        }
        else{
            nextTerm = n1 + n2;
            n1 = n2;
            n2 = nextTerm;
            cout<<nextTerm<<" ";
        }
    }
    
    cout<<endl;
}