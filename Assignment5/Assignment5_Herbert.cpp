#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double calcArea(double r){ //area of a circle
    return (3.14 * (r * r));
}
double calcArea(double l, double w){ //area of a rectangle
    return (l * w);
}

double rectanglePeri(double l, double w){ //perimeter of a rectangle
    return ((2 * l) + (2 * w));
}

double calcArea(double b, double h, bool isTriangle){ //area of a triangle
    return (0.5 * b * h);
}

double tempFC(double F){ //temperature conversion; F to C
    return ((F - 32) * (5/9));
}

double tempCF(double C){ //temperature conversion, C to F
    return ((C * (9/5)) + 32);
}


int main() {
    int choice = 7;
    double num1;
    double num2;
    double result;
    string text;

    do{
        cout << "\nChoose an operation: \n1. Basic Calculator \n2. Tempurature Conversion \n3. Rectangle Area and Perimeter \n4. Counter Function \n5. Shape Area Calculation \n6. Greet User \n7. Exit" << endl;
        cout << "\nEnter Your Choice: ";
        cin >> choice;
        
            switch(choice){
                case 1: //Basic Calculator: sqrt, pow, abs//
                cout << "Basic Calculator:" << endl;
                cout << "1. Square Root \n2. Exponents \n3. Absolute Value" << endl;
                cout << "Enter Your Choice: ";
                cin >> choice;
                switch(choice){
                    case 1:
                    cout << "Square Root Calculator:" << endl;
                    cout << "Enter Number: ";
                    cin >> num1;
                    cout << "The square root of " << num1 << " is " << sqrt(num1) << "." << endl;
                    break;
                    
                    case 2:
                    cout << "Exponents Calculator:" << endl;
                    cout << "Enter base number: ";
                    cin >> num1;
                    cout << "Enter exponent number: ";
                    cin >> num2;
                    cout << num1 << " to the power of " << num2 << " is " << pow(num1, num2) << "." << endl;
                    break;

                    case 3:
                    cout << "Absolute Value Calculator:" << endl;
                    cout << "Enter Number: ";
                    cin >> num1;
                    cout << "The absolute value of " << num1 << " is " << abs(num1) << "." << endl;
                    break;
                }
                break;

                case 2: //Temperature Conversion: f->c, c->f//
                cout << "Temperature Conversion:" << endl;
                cout << "1. Fahrenheit to Celcius \n2. Celcius to Fahrenheit" << endl;
                cout << "Enter Your Choice: ";
                cin >> choice;
                switch(choice){
                    case 1:
                    cout << "Enter your temperature in Fahrenheit: ";
                    cin >> num1;
                    cout << num1 << " degrees Fahrenheit is " << tempFC(num1) << " degrees Celcius." << endl;
                    break;

                    case 2:
                    cout << "Enter your temperature in Celcius: ";
                    cin >> num1;
                    cout << num1 << " degrees Celcius is " << tempCF(num1) << " degrees Fahrenheit." << endl;
                    break;
                }
                break;

                case 3: //Rectangle Area and Perimeter//
                cout << "Rectangle Area and Perimeter:" << endl;
                cout << "Enter rectangle length: ";
                cin >> num1;
                cout << endl << "Enter rectangle width: ";
                cin >> num2;
                cout << endl << "Enter unit of measurement: " << endl;
                cin >> text;
                cout << "The area of the rectangle is " << calcArea(num1, num2) << text << "^2. The perimeter of the rectangle is " << rectanglePeri(num1, num2) << text << "." << endl;
                break;

                case 4: //Counter Function//
                cout << "Counter Function:" << endl;
                cout << "Enter starting number: ";
                cin >> num1;
                cout << "Enter ending number: ";
                cin >> num2;
                for (result = num1; result <= num2; result++){
                    cout << result << endl;
                }
                break;

                case 5: //Shape Area Calculation//
                cout << "Shape Area Calculation:";
                cout << "1. Circle \n2. Rectangle \n3. Triangle" << endl;
                cout << "Enter Your Choice: " << endl;
                cin >> choice;
                switch(choice){
                    case 1:
                    cout << "Circle Area Calculation:" << endl;
                    cout << "Enter radius: ";
                    cin >> num1;
                    cout << "The area of a circle with a radius of " << num1 << " is " << calcArea(num1) << "." << endl;
                    break;

                    case 2:
                    cout << "Rectangle Area Calculation:" << endl;
                    cout << "Enter length: ";
                    cin >> num1;
                    cout << "Enter width: ";
                    cin >> num2;
                    cout << "The area of a rectangle with a length of " << num1 << " and a width of " << num2 << " is " << calcArea(num1, num2) << "." << endl;
                    break;

                    case 3:
                    cout << "Triangle Area Calculation:" << endl;
                    cout << "Enter base: ";
                    cin >> num1;
                    cout << "Enter height: ";
                    cin >> num2;
                    cout << "The area of a triangle with a base of " << num1 << " and a height of " << num2 << " is " << calcArea(num1, num2, true) << "." << endl;
                    break;
                }
                break;
                
                case 6: //Greet user//
                cout << "Enter your name: ";
                cin >> text;
                cout << "Hello " << text << "!";
                break;
            }
        
        }

    while (choice <= 6 && choice >= 1);
    if (choice == 7){ //exiting the program
        cout << "\nExiting the program\n.\n.\n.\nGoodbye!" << endl;
    }
    else{ //invalid input
        cout << "Invalid Input. Please restart the program and try again." << endl;
    }
    
    return 0;
}