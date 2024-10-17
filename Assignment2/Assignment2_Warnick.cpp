#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    /* DECLARATION OF VARIABLES */
    string title = "";  // the title of the book
    string author = ""; // the author of the book
    float price;        // the price of the book


    /* USER INPUTS */
    cout << " Enter the title of the book: "; // Asks the user for the book title
    getline(cin, title);                // Grabs the user's input including spaces and stores it in 'title'

    cout << "Enter the author of the book: "; // Asks the user for the book author
    getline(cin, author);               // Grabs the user's input including spaces and stores it in 'author'


    /* IF, ELSE, and WHILE Statements */
    while (true)    // Creates a while loop that only ends when the user types in a number greater than 0
    {
        cout << "Enter price of the book: ";    // Asks the user for the book price
        cin >> price;                           // Grabs the user's input and stores it in 'price'
        if ((cin.fail()) || (price <= 0))       // Runs if the user types in anything other than a number > 0
        {
        cout << "Invalid input. Please type a number greater than 0. \n";   /* Informs the user that their input
                                                                               was not accepted, then directs them
                                                                               to insert the correct input */
        cin.clear();                   // Clears the error flags to allow for new input
        cin.ignore(1000, '\n'); // Discards up to 1000 characters or until a new line is reached
        }
        else {break;}   // Stops the while loop if the user types in a number > 0
    }


    /* FINAL OUTPUTS */
    cout      << "\n--- Book Details ---"
              <<  "\nTitle: " << title
              << "\nAuthor: " << author
              << "\nPrice: $" << fixed << setprecision(2) << price << endl;
              /* The above line sets the max number of displayable decimal
               * places in 'price' to 2 (like with dollars and cents) */

        // The FINAL OUTPUTS displays the outputs in the following format:
            ////////////////////////////
            //  --- Book Details ---  //
            //  Title: 'title'        //
            //  Author: 'author'      //
            //  Price: $'price'       //
            ////////////////////////////
return 0;
}
