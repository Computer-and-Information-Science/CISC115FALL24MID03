#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
    
int main() {

// Most of these are obvious, but spaceCheck in particular is strictly for the program itself, and will not be output.
string bookTitle, authorName;
float price;
char spaceCheck;

//I use the combination of the putback function and the spaceCheck variable in order to skip any spaces entered by the user.
cout << "Enter book title: ";
cin >> spaceCheck;
cin.putback(spaceCheck);
getline(cin, bookTitle);
cout << "Enter author's name: ";
cin >> spaceCheck;
cin.putback(spaceCheck);
getline(cin, authorName);
cout << "Enter price of book: ";
cin >> price;

//The if statement checks to see if price is negative, 0, or a non-number.
//If the price succeeds this check (which is to say that it is an Invalid Input), then the program clears to avoid issues, then prompts the user to try again.
//The other variables are not checked as they are string values, so they shouldn't cause any issues with the code.
if (price <= 0)
{
    cin.clear();
    cout << "Invalid price entry. Please run program again." << endl;
}
//As long as the price is valid, the rest of the code is executed.
else 
{
    //cout << left formats the output to be left-bound. setw(10) is used on every line to format the title, author, and price to the same column of text.
    cout << left;
    cout << "----Book Details----" << endl;
    cout << setw(10) << "Title:";
    cout << bookTitle << endl;
    cout << setw(10) << "Author:";
    cout << authorName << endl;
    //setprecision(2) makes sure the price is listed like an actual dollar value.
    cout << fixed << setprecision(2);
    cout << setw(10) << "Price:";
    cout << "$" << price << endl;
}

}
