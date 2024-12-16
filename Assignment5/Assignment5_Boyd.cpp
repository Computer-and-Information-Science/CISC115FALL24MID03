#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Square Root\n";
        cout << "2. Power\n";
        cout << "3. Absolute Value\n";
        cout << "4. Temperature Conversion\n";
        cout << "5. Rectangle Area and Perimeter\n";
        cout << "6. Shape Area Calculation\n";
        cout << "7. Greet User\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double num;
                cout << "Enter a number: ";
                cin >> num;
                cout << "Square root: " << sqrt(num) << endl;
                break;
            }
            case 2: {
                double base, exponent;
                cout << "Enter base and exponent: ";
                cin >> base >> exponent;
                cout << "Power: " << pow(base, exponent) << endl;
                break;
            }
            case 3: {
                double num;
                cout << "Enter a number: ";
                cin >> num;
                cout << "Absolute value: " << abs(num) << endl;
                break;
            }
            case 4: {
                double temp, converted_temp;
                char unit;
                cout << "Enter temperature and unit (C or F): ";
                cin >> temp >> unit;
                if (unit == 'C') {
                    converted_temp = (temp * 9 / 5) + 32;
                    cout << "Temperature in Fahrenheit: " << converted_temp << endl;
                } else if (unit == 'F') {
                    converted_temp = (temp - 32) * 5 / 9;
                    cout << "Temperature in Celsius: " << converted_temp << endl;
                } else {
                    cout << "Invalid unit.\n";
                }
                break;
            }
            case 5: {
                double length, width;
                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area: " << length * width << endl;
                cout << "Perimeter: " << 2 * (length + width) << endl;
                break;
            }
            case 6: {
                int shape_choice;
                cout << "\nChoose a shape:\n";
                cout << "1. Circle\n";
                cout << "2. Triangle\n";
                cout << "3. Rectangle\n";
                cout << "Enter your choice: ";
                cin >> shape_choice;

                switch (shape_choice) {
                    case 1: {
                        double radius;
                        cout << "Enter radius of the circle: ";
                        cin >> radius;
                        cout << "Area of the circle: " << 3.14159 * radius * radius << endl;
                        break;
                    }
                    case 2: {
                        double base, height;
                        cout << "Enter base and height of the triangle: ";
                        cin >> base >> height;
                        cout << "Area of the triangle: " << 0.5 * base * height << endl;
                        break;
                    }
                    case 3: {
                        double length, width;
                        cout << "Enter length and width of the rectangle: ";
                        cin >> length >> width;
                        cout << "Area of the rectangle: " << length * width << endl;
                        break;
                    }
                    default:
                        cout << "Invalid shape choice.\n";
                }
                break;
            }
            case 7: {
                string name;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Hello, " << name << "!" << endl;
                break;
            }
            case 8:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 8);

    return 0;
}

