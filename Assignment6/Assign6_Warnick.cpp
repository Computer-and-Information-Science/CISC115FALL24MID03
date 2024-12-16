#include <iostream>
#include <string>
using namespace std;

// Global enum types used throughout the program
enum MovieGenre { ACTION, COMEDY, DRAMA, SCI_FI, HORROR };
enum TicketType { REGULAR, VIP, STUDENT };
typedef string String;

namespace theater_booking 
{
    bool loginW(String user, String pass);
    void getGenreName(MovieGenre selected);
    void calculateTicketPrice(TicketType selected);
}


int main()
{
    using namespace theater_booking; // Calls for the namespace declared above [main]
    char repeatProgram;

    do // do...while loop to have the program run at least once
    {
        // LOGIN VARIABLES
        String firstName, lastName; // Stores the user input for the first and last name
        bool login;                 // Used to check if user login information is correct

        cout << "Enter username: ";
        cin >> firstName;
        
        cout << "Enter password: ";
        cin >> lastName;

        login = loginW(firstName, lastName);    // Stores first+last name in a bool to then check for correct login

        if (login == false) // Stops program if user enters the incorrect username or password
        {
            cout << "Invalid username or password. Exiting program..." << endl;
            return 0;
        }
        else
            cout << "Login successful!" << endl;


        // GENRE AND TICKET VARIABLES
        int inputGenre, inputTicket;    // Stores input for the movie genre and ticket type
        MovieGenre enumGenre;           // Declares 'enumGenre' so the movie genres can be stored in it
        TicketType enumTicket;          // Declares 'enumTicket' so the ticket types can be stored in it
        
        // MOVIE GENRE
        cout << "\nSelect Movie Genre:" // Asks the user to select from a list of movie genres
             << "\n1. Action"
             << "\n2. Comedy"
             << "\n3. Drama"
             << "\n4. Sci-Fi"
             << "\n5. Horror" << endl;

        do
        {
            cout << "Enter choice (1-5): ";
            cin >> inputGenre;

            if ((inputGenre > 5) || (inputGenre < 1)) // Checks for invalid user input
            {
                cin.clear();
                cin.ignore(1000, '\n');
                inputGenre = 0;
                cout << "Invalid input. Please try again.\n" << endl;
            }
        }
        while (inputGenre == 0);

        // TICKET TYPE
        cout << "\nTicket Types:"   // Asks the user to select their ticket type
             << "\n1. Regular"
             << "\n2. VIP"
             << "\n3. Student" << endl;
        
        do
        {
            cout << "Enter your choice (1-3): ";
            cin >> inputTicket;
            
            if ((inputTicket > 3) || (inputTicket < 1)) // Checks for invalid user input
            {
                cin.clear();
                cin.ignore(1000, '\n');
                inputTicket = 0;
                cout << "Invalid input. Please try again.\n" << endl;
            }
        }
        while (inputTicket == 0);

        enumGenre = static_cast<MovieGenre>(inputGenre - 1);    // Takes user input and translates them into the matching enum values
        enumTicket = static_cast<TicketType>(inputTicket - 1);  

        getGenreName(enumGenre);            // Calls [getGenreName]
        calculateTicketPrice(enumTicket);   // Calls [calculateTicketPrice]


        do // Asks the user if they would like to run the program again
        {
            cout << endl << "Would you like to book another ticket? (y,n): ";
            cin >> repeatProgram;

            cin.ignore(1000, '\n');

            if ((repeatProgram != 'y') && (repeatProgram != 'n'))
                cout << "Invalid input. Please try again.\n";
        }
        while ((repeatProgram != 'y') && (repeatProgram != 'n'));
    } 
    while (repeatProgram != 'n');
    
    cout << "Thank you for using the theater booking system!\n" << endl;

    return 0;
}


bool theater_booking::loginW(String user, String pass) 
{
    if ((user == "Onna") && (pass == "Warnick"))
        return true;
    else
        return false;
}

void theater_booking::getGenreName(MovieGenre selected) 
{
    cout << "\nYou selected: ";
    switch (selected) 
    {
    case ACTION:
        cout << "Action" << endl;
        break;
    case COMEDY:
        cout << "Comedy" << endl;
        break;
    case DRAMA:
        cout << "Drama" << endl;
        break;
    case SCI_FI:
        cout << "Sci-Fi" << endl;
        break;
    case HORROR:
        cout << "Horror" << endl;
        break;
    }
}

void theater_booking::calculateTicketPrice(TicketType selected) 
{
    cout << "Ticket Type: ";
    switch (selected) 
    {
    case REGULAR:
        cout << "Regular" << endl;
        break;
    case VIP:
        cout << "VIP" << endl;
        break;
    case STUDENT:
        cout << "Student" << endl;
        break;
    }

    cout << "Ticket Price: ";
    switch (selected) 
    {
    case REGULAR:
        cout << "$10.00" << endl;
        break;
    case VIP:
        cout << "$20.00" << endl;
        break;
    case STUDENT:
        cout << "$8.00" << endl;
        break;
    }
}