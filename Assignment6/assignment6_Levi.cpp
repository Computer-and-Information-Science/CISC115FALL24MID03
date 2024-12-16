#include <iostream>
#include <string>

using namespace std;

//enumeration for genres
enum MovieGenre { ACTION, COMEDY, DRAMA, SCI_FI, HORROR };
enum TicketType { REGULAR, VIP, STUDENT };


string GenreName(MovieGenre genre) {
    switch (genre) {
        case ACTION: 
        return "Action";
        case COMEDY:
         return "Comedy";
        case DRAMA:
         return "Drama";
        case SCI_FI:
         return "Sci-Fi";
        case HORROR: 
        return "Horror";
        default: 
        return "Unknown";
    }
}

//ticket price
double TicketPrice(TicketType ticket) {
    switch (ticket) {
        case REGULAR:
         return 10.00;
        case VIP:
         return 20.00;
        case STUDENT:
         return 8.00;
        default:
         return 0.00;
    }
}

int main() {
    bool bookAgain = true;

    while (bookAgain) {
        //User picks a movie genre
        cout << "Select a Movie Genre:\n";
        cout << "1. Action\n2. Comedy\n3. Drama\n4. Sci-Fi\n5. Horror\n";
        cout << "Enter your choice: ";
        int genreChoice;
        cin >> genreChoice;
        MovieGenre genre = static_cast<MovieGenre>(genreChoice);

        //User select ticket type
        cout << "Select a Ticket Type:\n";
        cout << "1. Regular\n2. VIP\n3. Student\n";
        cout << "Enter your choice: ";
        int ticketChoice;
        cin >> ticketChoice;
        TicketType ticket = static_cast<TicketType>(ticketChoice);

        //display ticket options
        cout << "You selected:\n";
        cout << "Genre: " << GenreName(genre) << endl;
        cout << "Ticket Type: " << (ticket == REGULAR ? "Regular" : ticket == VIP ? "VIP" : "Student") << endl;
        cout << "Ticket Price: $" << TicketPrice(ticket) << endl;
    
        //Ask to book another ticket
        char choice;
        cout << "Would you like to book another ticket? (y/n): ";
        cin >> choice;
        bookAgain = (choice == 'y' || choice == 'Y');
    }

    cout << "Thank you for using the ticket booking system!\n";
    return 0;
}