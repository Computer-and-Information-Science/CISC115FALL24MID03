//*****************************
//Northampton Community College
//Computer Science 115
//Brendan Cleary
//*****************************

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // My declared variables for this program
    int age = 32;
    float myGPA = 3.19;
    char nickname = 'B';
    string myString = "I look forward to a world where I can investigate all the little secrets.";

    // Outputs for the various values

    cout << "Welcome to my code! Here are some basics:\n";
    cout << "My age: " << age << endl;
    cout << "My current NCC GPA: " << myGPA << endl;
    cout << "My old nickname in high school: " << nickname << endl;
    cout << myString << endl;

    cout << "\n Lets change my GPA to something more rounded, shall we?\n" ;
    cout << "Make my GPA flat: " << int(myGPA) << endl;

    // Basic arithmetic operation
    cout << "\n Math Time!\n";
    cout << "The real GPA I want: " << int(myGPA) + 1 << endl;

    return 0;
}