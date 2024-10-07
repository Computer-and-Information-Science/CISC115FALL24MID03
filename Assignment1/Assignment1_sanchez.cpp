#include <iostream>
#include <string>

using namespace std;

int main() {

char grade;
int age;
double height;
string name = "Frank";

std:: cout << "Enter height:  ";
cin >> height; 
cout << "Enter age: ";
cin >> age;
cout << "Enter grade: ";
cin >> grade;

age = age + 7;
height = static_cast<int>(height) + 1;

cout << "My name is " << name << '.' << endl;
cout << "This is my firt C++ program." << endl;
cout << "My age is " << age << '.' << endl;
cout << "My actual height is " << height << " feet." << endl;
cout << "And the grade i'm going for is an " << grade << endl;

return 0;

}