//*****************************
//Northampton Community College
//Computer Science 115
//Brendan Cleary
//*****************************

#include <iostream>
#include <string>

using namespace std;

// Namespace for theater booking
namespace theater_booking {
    // Enumeration for movie genres
    enum MovieGenre { ACTION = 1, COMEDY, DRAMA, SCI_FI, HORROR };

    // Enumeration for ticket types
    enum TicketType { REGULAR = 1, VIP, STUDENT };

    // Typedef for strings
    typedef string String;

    // Function prototypes
    String getGenreName(MovieGenre genre);
    double calculateTicketPrice(TicketType type);
}

using namespace theater_booking;

int main() {
    String userName, password;

    // Authentication
    cout << "Enter username: ";
    cin >> userName;
    cout << "Enter password: ";
    cin >> password;

    if (userName != "Brendan" || password != "Cleary") {
        cout << "Authentication failed. Exiting program.\n";
        return 1;
    }

    cout << "Authentication successful. Welcome to the Movie Ticket Booking System!\n";

    bool bookAnotherTicket = true;

    while (bookAnotherTicket) {
        // Prompt user for movie genre
        cout << "\nSelect a movie genre:\n";
        cout << "1. Action\n2. Comedy\n3. Drama\n4. Sci-Fi\n5. Horror\n";
        int genreChoice;
        cin >> genreChoice;

        if (genreChoice < 1 || genreChoice > 5) {
            cout << "Invalid genre choice. Please try again.\n";
            continue;
        }

        MovieGenre selectedGenre = static_cast<MovieGenre>(genreChoice);

        // Prompt user for ticket type
        cout << "\nSelect a ticket type:\n";
        cout << "1. Regular ($10)\n2. VIP ($20)\n3. Student ($8)\n";
        int ticketChoice;
        cin >> ticketChoice;

        if (ticketChoice < 1 || ticketChoice > 3) {
            cout << "Invalid ticket type. Please try again.\n";
            continue;
        }

        TicketType selectedTicket = static_cast<TicketType>(ticketChoice);

        // Display selection and ticket price
        cout << "\nYou selected:\n";
        cout << "Genre: " << getGenreName(selectedGenre) << "\n";
        cout << "Ticket Type: " << (selectedTicket == REGULAR ? "Regular" :
                                        selectedTicket == VIP ? "VIP" : "Student") << "\n";
        cout << "Price: $" << calculateTicketPrice(selectedTicket) << "\n";

        // Ask if the user wants to book another ticket
        cout << "\nDo you want to book another ticket? (1 for Yes, 0 for No): ";
        int choice;
        cin >> choice;

        bookAnotherTicket = (choice == 1);
    }

    cout << "Thank you for using the Movie Ticket Booking System. Goodbye!\n";
    return 0;
}

// Function definitions
namespace theater_booking {
    String getGenreName(MovieGenre genre) {
        switch (genre) {
            case ACTION: return "Action";
            case COMEDY: return "Comedy";
            case DRAMA: return "Drama";
            case SCI_FI: return "Sci-Fi";
            case HORROR: return "Horror";
            default: return "Unknown";
        }
    }

    double calculateTicketPrice(TicketType type) {
        switch (type) {
            case REGULAR: return 10.00;
            case VIP: return 20.00;
            case STUDENT: return 8.00;
            default: return 0.00;
        }
    }
}
