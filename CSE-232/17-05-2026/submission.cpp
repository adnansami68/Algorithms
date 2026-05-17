#include<iostream>
using namespace std;

void selectionsort( int n , int arr[] , int k){
    for ( int i = 0; i<k ; i++){
        int smallestIndex = i;

        for( int j = i+1 ;j < n ; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
           
        }
         swap(arr[i], arr[smallestIndex]);
    }
}

void printselectionsort( int n , int arr[] , int k){
    for ( int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

void insertionsort( int n , int arr[]){
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

void printinsertionsort( int n , int arr[]){
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<< " ";
    }

    cout<<endl;
}

int main(){

    int n , k;
    cout<<"Enter Number : ";
    cin>>n;
    
    int* arr = new int[n];

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cin>>k;

    selectionsort(n , arr , k);
    cout<<"After Selection Phase :";
    printselectionsort(n , arr , k);

    cout<<endl;

    insertionsort(n , arr);
    cout<<"After Final Sorted Array : ";
    printinsertionsort(n , arr);

}
