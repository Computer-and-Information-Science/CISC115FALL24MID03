//*****************************
//Northampton Community College
//Computer Science 115
//Brendan Cleary
//*****************************


#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void sortNames(string names[], int size);
bool searchName(const string names[], int size, const string& target);
string findLongestName(const string names[], int size);
int countVowels(const string names[], int size);

// Helper function to count vowels in a single string
int countVowelsInString(const string& str);

int main() {
    int n;

    // Input: Number of names
    cout << "Enter the number of names: ";
    cin >> n;
    cin.ignore(); // Clear the input buffer

    // Dynamically allocate array of strings
    string* names = new string[n];

    // Input the names
    cout << "Enter " << n << " names:" << endl;
    for (int i = 0; i < n; ++i) {
        getline(cin, names[i]);
    }

    // Processing and Output
    sortNames(names, n);

    // Display sorted names
    cout << "\nSorted names:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << names[i] << endl;
    }

    // Search for a name with a prompt until valid input is given
    string target;
    bool found = false;
    do {
        cout << "\nEnter a name to search for: ";
        getline(cin, target);
        found = searchName(names, n, target);
        if (!found) {
            cout << target << " is not in the list. Please try again.\n";
        }
    } while (!found);

    cout << target << " is in the list.\n";

    // Find the longest name
    string longestName = findLongestName(names, n);
    cout << "\nThe longest name is: " << longestName << endl;

    // Count vowels in all names
    int totalVowels = countVowels(names, n);
    cout << "Total number of vowels in all names: " << totalVowels << endl;

    // Free the dynamically allocated memory
    delete[] names;

    return 0;
}

// Function definitions

void sortNames(string names[], int size) {
    // Bubble sort algorithm
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (names[j] > names[j + 1]) {
                // Swap names[j] and names[j + 1]
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

bool searchName(const string names[], int size, const string& target) {
    for (int i = 0; i < size; ++i) {
        if (names[i] == target) {
            return true;
        }
    }
    return false; // Return false if the name is not found
}

string findLongestName(const string names[], int size) {
    string longest = names[0];
    for (int i = 1; i < size; ++i) {
        if (names[i].length() > longest.length()) {
            longest = names[i];
        }
    }
    return longest;
}

int countVowels(const string names[], int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += countVowelsInString(names[i]);
    }
    return total;
}

int countVowelsInString(const string& str) {
    int count = 0;
    for (char ch : str) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            ++count;
        }
    }
    return count;
}
