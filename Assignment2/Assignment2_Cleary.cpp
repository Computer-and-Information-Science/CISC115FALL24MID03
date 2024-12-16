//*****************************
//Northampton Community College
//Computer Science 115
//Brendan Cleary
//*****************************

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>  // Include this header for numeric_limits
using namespace std;

int main() {
    string bookTitle, authorName;
    double price;

    // Collect Book Information
    cout << "Enter the title of the book: ";
    getline(cin, bookTitle);

    cout << "Enter the author's name: ";
    getline(cin, authorName);

    // Validate price input (must be a valid number)
    cout << "Enter the price of the book (No '$' input, please.): ";
    while (!(cin >> price)) {
        cout << "Invalid price. Please enter a valid number for the price: ";
        cin.clear();  // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
    }

    // Display Book Information
    cout << "\n--- Book Information ---\n";
    cout << "Title: " << bookTitle << endl;
    cout << "Author: " << authorName << endl;

    // Format price to two decimal places
    cout << fixed << setprecision(2);
    cout << "Price: $" << price << endl;

    // Use manipulators to align and format output
    cout << "\nFormatted Output:\n";
    cout << left << setw(30) << "Book Title" << ": " << bookTitle << endl;
    cout << left << setw(30) << "Author Name" << ": " << authorName << endl;
    cout << left << setw(30) << "Price" << ": $" << fixed << setprecision(2) << price << endl;

    return 0;
}
