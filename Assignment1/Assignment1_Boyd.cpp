#include <iostream>
#include <string>
using namespace std;
int main (){
    int age;
    float height;
    char grade;
    string fullname;
    // First, Declare the variables for each types

    age = 15;
    height = 5.7;
    grade = 'A';
    fullname = "Rashaun Boyd";
    // Second, Assign the values to the variables

    age = age + 10;
    // Third, Perform basic operations to one of the variables
    
    cout << "My name is Rashaun Boyd" << endl;
    cout << "This is my first basic program in C++" << endl;
    cout << "Age:" << age << endl;
    cout << "Height:" << height << endl;
    cout << "The grade I want to achieve in CISC115:" << grade << endl;
    cout << "New Age (float):" << age << endl;
    cout << "Rounded Height (int):" << static_cast <int> (height) << endl;
    // Convert values and use cout

    return 0;
}