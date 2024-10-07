#include <iostream>
using namespace std;

int main()
{
    // VARIABLES:
    std::string name = "Onna Warnick"; // user's first and last name
    std::string code = "C++";          // the programming language used
    int age = 19;                      // the user's age
    double height = 5.3;               // the user's height
    int rndHeight;                     // the user's height rounded down to the nearest whole number
    char grade = 'A';                  // the user's desired grade for this class
    /*
     * Declares & initializes variables for the user's name,
     * current coding language, age, height, rounded height,
     * and desired grade.
    */


    // MODIFICATIONS:
    rndHeight = static_cast<int>(height); /* casts the double 'height' to an int, rounding the value
                                             down to a whole # and storing its result in 'rndHeight' */
    double newAge = (double) age + 55.5;  /* casts the int 'age' to a double, then adds 55.5 to the
                                             double 'age' and stores the result in 'newAge' */
    int veryOldPerson = 100 - age;        // calculates the # of years before the user turns 100 years old


    // OUTPUTS:
    std::cout << "Name: " << name
              << "\nThis is my first basic program in " << code
              << "\nAge: " << age
              << "\nHeight: " << height
              << "\nRounded Height: " << rndHeight
              << "\nIn 55.5 years, I will be " << newAge << " years old."
              << "\nIt will be " << veryOldPerson << " years before I turn 100."
              << "\nI would like to have a(n) " << grade << " in this class.";
        /* Displays the user's data in the following format: */
    //////////////////////////////////////////////////////////////
    //    Name: [name]                                          //
    //    This is my first basic program in [code]              //
    //    Age: [age] years old                                  //
    //    Height: [height]                                      //
    //    Rounded Height: [rndHeight]                           //
    //    In 55.5 years, I wll be [newAge] years old.           //
    //    It will be [veryOldPerson] years before I turn 100.   //
    //    I would like to have a(n) [grade] in this class.      //
    //////////////////////////////////////////////////////////////

    return 0;
}