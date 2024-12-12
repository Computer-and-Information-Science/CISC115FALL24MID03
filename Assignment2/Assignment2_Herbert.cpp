#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    //define variables
    string title;
    string author;
    double price = -1;

        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author's name: ";
        getline(cin, author);

        do{ //check user input
            cout << "Enter price: $";
            cin >> price;
            if (price >= 0){
                break;
            }
            else{
                cout << '\n' << "Invalid input. Please enter a positive number." << endl;
                price = -1;
            }
        }
        while (price < 0);

    cout << '\n' << setw(10) << "Book Details:" << endl;
    cout << setw(15) << left << "Book title: " << right << title << endl;
    cout << setw(15) << left << "Author: " << right << author << endl;
    cout << setw(15) << left << "Price: " << right << setprecision(2) << fixed << "$" << price << endl;

    return 0;
}
