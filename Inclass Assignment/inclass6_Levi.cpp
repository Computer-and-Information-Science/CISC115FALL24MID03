#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers [n];
    int sum = 0;
 cout << "Enter " << n << " numbers:" << endl;
 for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    
    cout << "The sum of the numbers is: " << sum << endl;
    return 0;
}