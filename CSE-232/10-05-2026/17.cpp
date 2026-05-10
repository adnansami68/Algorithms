#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter Number : ";
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int largest = arr[0];
    int secondlargest = -1;

    for(int i = 0; i<n ; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];

        }else if(arr[i] < largest && arr[i] > secondlargest){
            secondlargest = arr[i];
        }
    }
    cout<<"Second Largest Number : "<<secondlargest<<endl;

}


