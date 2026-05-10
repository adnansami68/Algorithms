#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int currentNumber; 
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 1; i <=n; i++) {
        cin >> currentNumber; 
        sum = sum + currentNumber; 
    }

    cout<<"Average is: "<<sum/n<<endl;
    return 0;
}
