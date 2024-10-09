/*Wayne Nerbert Mudogo
30th September 2024
Coding Assignment 
Objective: To output all simple data types and familiarising with the basic elements of C++ programming */

#include <iostream>
#include <string> //includes string data types

using namespace std;

int main() {
    int age = 21;                           //Integer to process the age 
    double height = 5.9;                   //double to store height data
    char grade = 'A';                      //char to use for storing grade data
    string fullname = "Wayne Mudogo";       //string variable to store full name
    string introduction = "This is my first C++ program";
    //Printing the values
    cout << "Initial Value" << endl;
    cout << "Introduction" << introduction << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Name(s): " << fullname << endl << endl;

    //The Basic Operations

    age = age + 10; //modifying the age output by increasing to additional 10 years
    height = height + 0.2; //modifying the height output to an additional of 0.2 points

    //The modified vales

    cout << "Modified Values:" << endl;
    cout << "Modified Age: " << age << endl;
    cout << "Modified Height: " << height << endl << endl;

    //Type Conversion /Casting   (Implicit conversion)

    double newHeight = age; // Assigning an int (age) to a double (newHeight)
    cout << "Implicit Conversion (int to double):" << endl;
    cout << "New Height (after assigning age to double): " << newHeight << endl << endl;

    //Type Conversion (Explicit Conversion)

    int roundedHeight = static_cast<int>(height);  // Casting double height to int
    cout << "Explicit Conversion (double to int):" << endl;
    cout << "Rounded Height (after casting double to int): " << roundedHeight << endl << endl;

    
    return 0;
}

