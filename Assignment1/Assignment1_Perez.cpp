//Using namespace std lets me use cout without using the std:: identifier. 
#include <iostream>
#include <string>
using namespace std;


int main() {
//First, I declare the variables used.
int age;
float height;
char grade;
string firstName;

//Then, I assign the variables their values.
age = 10;
height = 5.8;
grade = 'A';
firstName = "Snow";

//This supplies both an example of basic arithmatic, as well as implicit type casting. Explicit will show up later.
age = age + 10.7;

//Now I proceed with generating the text using cout commands.
cout << "Hello, my name is " << firstName << "." << endl;
cout << "This is my first computer program." << endl;
cout << "My age is: " << age << endl;
cout << "My height is: " << height << " feet" << endl;
cout << "The grade I'm hoping for is: " << grade << endl;
cout << "Rounded height (int): " << static_cast<int>(height) << endl;

  
    return 0;
}
