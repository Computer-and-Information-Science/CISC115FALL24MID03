#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string fullname;
    int age;
    float height;
    char grade;
    // Im declaring all of my variables for the code first

   fullname = "Levi Pichardo";
    age = 19;
    height = 5.8;
    grade = 'A';
    // Im now setting values to all of my variables 

    cout << "My name is : " << fullname << endl;
    cout << "This is my first program in C++" << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "I want Grade in CISC 115: " << grade << endl;
    cout << "New Age (float): " << age << endl;
    cout << "Rounded Height (int: )" << std::round(height) << std::endl;
    // To finish, I print all of my outputs and plug in my variables (I had to search how to round height)

    return 0;
}