#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter Number : ";
    cin >> n;

    int arr[n]; 
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    cout << "Unique elements: ";
    
    for(int i = 0; i < n; i++) {
        
        int j;
        
        for(j = 0; j < i; j++) {
            
            if(arr[i] == arr[j]) {
                break;
            }
        }
        
        if(j == i) {
            cout << arr[i] << " ";
        }
    }
    
    cout << endl;

}