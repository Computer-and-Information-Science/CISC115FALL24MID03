#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string bookTitle;
    string authorName;
    double bookPrice;

    cout << "Enter book title: Lord of the Files";
    getline (cin, bookTitle);
    cout << endl;
    cout << "Enter author's name: William Goldling";
    getline (cin, authorName);
    cout << endl;
    cout << "Enter book price: $1000";
    cin >> bookPrice;
    cout << endl;
    
    if (bookPrice <= 0);
    cin.clear ();
    cout << "Invaild input. Please enter correct data type. " << endl;
    
    cin.ignore (100, '\n');
    
    cout << "----- Book Details -----" << endl;
    cout << setw (10) << "Title: Lord of the Files" << endl;
    cout << bookTitle << endl;
    cout << setw (10) << "Author: William Goldling" << endl;
    cout << authorName << endl;
    cout << setw (10) << "Price:$1000"<< endl;
    cout << bookPrice << fixed << setprecision (2) << endl;
    
    return 0;
}