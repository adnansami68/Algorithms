#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter Number "<<endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    int key;
    cout << "Enter Linear Search key: ";
    cin >> key;

    bool isFound = false;
    int position = -1;

    
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            isFound = true; 
            position = i + 1;
            break; 
        }
    }

    
    if(isFound == true) {
        cout << "Position: " << position << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
