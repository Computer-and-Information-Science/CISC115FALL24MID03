#include <iostream>

using namespace std;

int main() 
{
    string Fullname; //string name
    int age; //integer age
    float height; //float height
    char grade; //character grade
    //Declare variables for each type

    Fullname = "Anna Herbert";
    age = 18;
    height = 5.6;
    grade = 'A';
    //Assign values to variables

    cout <<"My name is " << Fullname << "." << endl;
    cout << "This is my first basic program in C++." << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " ft" << endl;
    cout << "The grade I want in CISC115 is a(n) " << grade << "." << endl;
    
    age = age + 10.5;
    //perform basic operation & demonstrate implicit type conversion
    cout << "New Age (float): " << age << " years" << endl;

    
    cout << "Height Rounded (int): " << static_cast <int> (height) << " ft." << endl; //implicit type conversion float to int
    //generate output using cout

}
