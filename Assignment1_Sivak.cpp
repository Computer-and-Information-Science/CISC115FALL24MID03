#include <iostream>

using namespace std;

int main()
{

	int age; 
	float height;
	char grade;
	string fullName;
	// Declaring my variables here

	age = 18;
	height = 6;
	grade = 'A';
	fullName = "Skylar Sivak";
	// Assigning values to my variables

	cout << "My name is " << fullName << endl;
	cout << "I am " << age << " years old" << endl;
	cout << "My height is " << height << endl;
	cout << "I hope for my grade to be an " << grade << endl;
	// Printing all of my information. 

	cout << "My age in ten years is " << age + 10.0 << endl;
	// Using this as both the simple arithmetic AND implicit type conversion.
	// The numerical value of the variable 'age' added with the ten automatically
	// is automatically transcribed into a float value, rather than integer. 
	cout << "My height when I'm 89 might be " << height - 0.3 << endl;
	// Silly

	cout << "When I am buried I will be " << static_cast<int> (6 - 12.8) << " feet underground!" << endl;
	// This should print into an integer and give me -6. I'll be 6ft underground! 

	return 0;

}