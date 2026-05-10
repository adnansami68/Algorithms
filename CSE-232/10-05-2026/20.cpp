#include <iostream>
using namespace std;

int main() {
    char arr[100];

    cout << "Enter a word: ";
    cin >> arr;

    for (int i = 0; arr[i] != '\0'; i++) {
        
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }

    cout << "Uppercase: " << arr << endl;
}