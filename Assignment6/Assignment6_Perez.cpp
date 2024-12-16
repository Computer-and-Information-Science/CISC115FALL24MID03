#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

//These enum types need to be global because they are used within the functions as well.
enum MovieGenre {FILLERGENRE,ACTION, COMEDY, DRAMA, SCI_FI, HORROR}; //The FILLER values are so the static_cast later works.
enum TicketType {FILLERTICKET,REGULAR,VIP,STUDENT};
typedef string String; //Requested by #2 in the instructions.

namespace theater_booking{  //Requested by #3 in the instructions.
bool loginSnow(String Snow, String Perez);
void getGenreName(MovieGenre selected);
void calculateTicketPrice(TicketType selected);
}


int main(){

using namespace theater_booking; //This expression calls for the namespace declared earlier. However, the instructions to only
char repeatChoice;               //declare this in main, so when rewritting the functions later, "I use theater_booking::"

do{                              //Just like last week, the entire program is in a do loop in order to loop back later.
String firstName, lastName;
bool login;

cout << "Enter Username: ";
getline(cin, firstName);         //I use getline instead of cin so that the acconut is a little more secure. This proposed
cout << "Enter Password: ";      //an issue that will be referenced later.
getline(cin, lastName);          

login = loginSnow(firstName,lastName); //Here is my first function, which only tells if the entered info matches my name. The
if (login == false){                   //rest of this block of code determines what to do with that information.
    cout << "Incorrect login information. Terminating program. Goodbye." << endl;
    return 1;
}
else
cout << "Login successful!" << endl << endl;

int inputGenre, inputTicket;     //For organization, I waited until after the login bit to assign the rest of the variables.
MovieGenre enumGenre;            
TicketType enumTicket;

cout << "Available Movie Genres:" << endl;
cout << "1) Action" << endl;
cout << "2) Comedy" << endl;
cout << "3) Drama" << endl;
cout << "4) Sci-Fi" << endl;
cout << "5) Horror" << endl;

do{                              //This "do" statement, along with all future ones, are used to protect from invalid inputs.
cout << "Enter your choice (1-5): ";
cin >> inputGenre;
if ((inputGenre > 5) || (inputGenre < 1)){
cin.clear();
cin.ignore(1000,'\n');
inputGenre = 0;
cout << "Invalid input. Please try again." << endl;
}
}
while(inputGenre == 0);

cout << "Ticket Types:" << endl;
cout << "1) Regular" << endl;
cout << "2) VIP" << endl;
cout << "3) Student" << endl;
do{
cout << "Enter your choice (1-3): ";
cin >> inputTicket;
if ((inputTicket > 3) || (inputTicket < 1)){
cin.clear();
cin.ignore(1000,'\n');
inputTicket = 0;
cout << "Invalid input. Please try again." << endl;
}
}
while(inputTicket == 0);

cout << endl;

enumGenre = static_cast<MovieGenre>(inputGenre);    //Once the input values are selected, they are translated into their
enumTicket = static_cast<TicketType>(inputTicket);  //respective enum values.

getGenreName(enumGenre);                            //Then, they are run through the proper functions.
calculateTicketPrice(enumTicket);


do{                              
cout << endl << "Would you like to book another ticket? (y,n): ";
cin >> repeatChoice;

cin.ignore(1000, '\n');

if ((repeatChoice != 'y') && (repeatChoice != 'n'))
    cout << "Invalid input. Please try again.";
}
while((repeatChoice != 'y') && (repeatChoice != 'n'));
}
while(repeatChoice != 'n');
cout << "Thank you for using the theater booking system!";
return 0;
}


bool theater_booking::loginSnow(String Snow, String Perez){
    if ((Snow == "Snow") && (Perez == "Perez"))
    return true;
    else
    return false;
}
void theater_booking::getGenreName(MovieGenre selected){     //I should note that, obviously, FILLERGENRE does not get a case.
    cout << "You have selected: ";                           //It shouldn't be accessible in this code anyways.
    switch(selected){
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
void theater_booking::calculateTicketPrice(TicketType selected){
    cout << "Ticket Type: ";
    switch(selected){
        case REGULAR:
        cout << "Regular" << endl;
        break;
        case VIP:
        cout << "VIP" << endl;
        break;
        case STUDENT:
        cout << "Sudent" << endl;
        break;
    }
    cout << "Ticket Price: ";
      switch(selected){
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
