#include <iostream> //input output
#include <string>  //includes string in the program

using namespace std; // With this line, we can write cout without std::

int main() {
cout <<"My first C++ Program" << endl; //Displays the listed text

int age=17+.5;   // defines age and increments it by 0.5
double height=6+.1;  //defines height and increments it by 0.1
char Grade= 'A'; //defines grade
string Name= "Gurshan Nijjar"; //defines name

float convertedage = age;  //implicit type conversion, implicitly converting int to float
int intheight= static_cast<int>(height-0.1); //explicit type conversion, explicitly converting double to int

cout << "My name is:" << Name << endl // the following lines are the output and what the console displays
     << "Age:" << age << endl
     << "Height:" << height << endl
     << "I want this grade in Cisc 115:" << Grade << endl
     << "New Age (float):" << convertedage << endl
     << "Rounded Height(int):" << intheight << endl;

return 0; //ends the program
}