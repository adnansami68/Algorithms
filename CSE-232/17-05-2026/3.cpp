#include<iostream>
using namespace std;

void libraryBooks( int n , int arr[]){
    for( int i=1 ; i<n ; i++){
        int currentValue = arr[i];
        int previousvalue = i-1;

        while( previousvalue >=0 && arr[previousvalue]>currentValue){
            arr[previousvalue+1] = arr[previousvalue];
                previousvalue --;
        }

        arr[previousvalue +1 ] =currentValue;

    }

}

void printlibraryBooks( int n , int arr[]){
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<< " ";
    }

    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i<n ; i++){
        cin>> arr[i];
    }

    libraryBooks( n , arr);
    printlibraryBooks( n , arr);

}
