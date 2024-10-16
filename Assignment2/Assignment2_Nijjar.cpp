#include <iostream> 
#include <iomanip>
#include <string> //includes the string command in the code
using namespace std; // allows us to skip std:: when writing cout/cin

int main() {
string bookTitle, author_name;  //defines book title and authorname as a string
double bookPrice;  // defines the book price as a double

cout << "Enter Book Title: ";  //outputs the listed text to the user
getline (cin,bookTitle);  // allows spaces to be included in the response

cout << "Enter Author's Name:"; //outputs the listed text to the user
getline (cin, author_name);  //allows spaces to be included in the response

while (true) { //this creates a loop until the user enters a correct output  (used google for help on this section up until the break function)
cout << "Enter the Price of the Book:"; //outputs the listed text to the user
cin >> bookPrice;  // user response is displayed as the variable bookprice

if (cin.fail()) {  //This occurs when the wrong input is recieved and displays an error )
cout << "Invalid input for the price, please insert a number." << endl;
cin.clear();
cin.ignore(100, '\n');
} else { //If the right input is detected the loop breaks and outputs the data 
break;
}
}
cout << "-----Book Information-----" << endl; //Displays this text to the user
cout << "Title: " << bookTitle<< endl; //Displays the inputed title neatly to the user
cout << "Author:" << author_name << endl; //Displays the inputed title neatly to the user
cout << "Price:$" << fixed << setprecision(2) << bookPrice  << endl; //Displays the inputed title neatly to the user


return 0;
}
