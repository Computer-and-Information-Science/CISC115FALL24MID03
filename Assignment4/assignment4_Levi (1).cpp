#include <iostream>
using namespace std;

double squareRoot(double num) {
    return num * 0.5;
}

double power(double base, double exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

double absoluteValue(double num) {
    if (num < 0) return -num;
    return num;
}

double circleArea(double radius) {
    return 3.14159 * radius * radius;
}

double rectangleArea(double length, double width) {
    return length * width;
}

double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double rectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

void menu() {
    int choice;
    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Basic Calculator\n";
        cout << "2. Temperature Conversion\n";
        cout << "3. Rectangle Area and Perimeter\n";
        cout << "4. Shape Area Calculation\n";
        cout << "5. Greet User\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int operation;
                double num1, num2;
                cout << "Choose operation:\n1. Square Root\n2. Power\n3. Absolute Value\nEnter your choice: ";
                cin >> operation;

                switch (operation) {
                    case 1:
                        cout << "Enter a number: ";
                        cin >> num1;
                        cout << "Square root of " << num1 << " is " << squareRoot(num1) << endl;
                        break;
                    case 2:
                        cout << "Enter base: ";
                        cin >> num1;
                        cout << "Enter exponent: ";
                        cin >> num2;
                        cout << num1 << " raised to the power of " << num2 << " is " << power(num1, num2) << endl;
                        break;
                    case 3:
                        cout << "Enter a number: ";
                        cin >> num1;
                        cout << "Absolute value of " << num1 << " is " << absoluteValue(num1) << endl;
                        break;
                    default:
                        cout << "Invalid operation.\n";
                }
                break;
            }
            case 2: {
                double fahrenheit, celsius;
                cout << "Enter temperature in Fahrenheit: ";
                cin >> fahrenheit;
                cout << fahrenheit << " Fahrenheit is " << fahrenheitToCelsius(fahrenheit) << " Celsius.\n";

                cout << "Enter temperature in Celsius: ";
                cin >> celsius;
                cout << celsius << " Celsius is " << celsiusToFahrenheit(celsius) << " Fahrenheit.\n";
                break;
            }
            case 3: {
                double length, width;
                cout << "Enter length of rectangle: ";
                cin >> length;
                cout << "Enter width of rectangle: ";
                cin >> width;
                cout << "Area of rectangle: " << rectangleArea(length, width) << endl;
                cout << "Perimeter of rectangle: " << rectanglePerimeter(length, width) << endl;
                break;
            }
            case 4: {
                int shapeChoice;
                cout << "Choose a shape:\n1. Circle\n2. Rectangle\n3. Triangle\nEnter your choice: ";
                cin >> shapeChoice;

                if (shapeChoice == 1) {
                    double radius;
                    cout << "Enter the radius of the circle: ";
                    cin >> radius;
                    cout << "Area of circle: " << circleArea(radius) << endl;
                } else if (shapeChoice == 2) {
                    double length, width;
                    cout << "Enter the length of the rectangle: ";
                    cin >> length;
                    cout << "Enter the width of the rectangle: ";
                    cin >> width;
                    cout << "Area of rectangle: " << rectangleArea(length, width) << endl;
                } else if (shapeChoice == 3) {
                    double base, height;
                    cout << "Enter the base of the triangle: ";
                    cin >> base;
                    cout << "Enter the height of the triangle: ";
                    cin >> height;
                    cout << "Area of triangle: " << triangleArea(base, height) << endl;
                } else {
                    cout << "Invalid choice.\n";
                }
                break;
            }
            case 5: {
                string name;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Hello, " << name << "!" << endl;
                break;
            }
            case 6:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);
}

int main() {
  //pyramid
    int rows = 5; //Number of rows
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

       
        for (int j = 1; j <= i; j++) {
            cout << i << "  "; //extra space between numbers
        }

        cout << endl;
    }

    
    menu();
    return 0;
}