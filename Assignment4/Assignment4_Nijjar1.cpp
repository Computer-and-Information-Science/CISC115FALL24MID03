#include <iostream>
using namespace std;

int main() {
double num1; // all variables are declared here
double num2;
char op;
double fnum;
char cont;

cout << "Welcome to the Menu Driven Calculator!" << endl;

do{
cout << "Enter the first number" << endl; // collects number 1 and 2 and operator
cin >> num1;

cout << "Enter the second number" << endl;
cin >> num2;
cout << "--------------------------------" << endl;

cout << "Please choose the Operation you would like to perform:" << endl <<
"1. Addition (+)" << endl << "2.Subtraction (-) " << endl << "3.Multiplication (*) " << endl << "4. Division (/)" << endl;
cout << "--------------------------------------" << endl;

cout << "Enter the Operation you would like to perform ( +, -, *, / ):" << endl;
cin >> op;
cout << "--------------------------------" << endl;

if (num2==0 && op=='/') {
cout << "Error: Division by zero is not allowed" << endl;  //If the user tries to divide by zero, an error appears 
cout << "Would you like to continue? (Y for yes, N for no)" << endl; //They are then asked if they want to continue
cin >> cont;
if (cont =='y' || cont =='Y') continue;
else break;

} 


switch (op) {  //switch case takes user input and performs the desired operation
case '+': fnum=num1+num2;
break;
case '-': fnum=num1-num2;
break;
case '*': fnum=num1*num2;
break;
case '/': fnum=num1/num2;
break;
default: // If an incorrect operator is collected, the code exits with errors
cout << "Error Invalid Operator, please try again" << endl;
return 1;
}

cout << "The result of " << num1 << op << num2 << " is " << fnum << endl; //This displays the results of the equation
cout << "Would you like to continue? (Y for yes, N for no)" << endl; //Asks the user if they want to continue
cin >> cont;

if (cont=='N' || cont =='n') {  //If they select no, a salutation is displayed and code exits
cout << "Thank you for using this calculator, have a great day!" << endl;
return 0;
}


} while( cont=='Y' || cont== 'y'); // the do while loop continues if yes is selected

if (cont=='N' || cont=='n') {
cout << "Thank you for using this calculator, have a great day!" << endl;
return 0;
}
}