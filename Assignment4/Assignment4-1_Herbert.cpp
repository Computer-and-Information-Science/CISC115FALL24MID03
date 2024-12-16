#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char choice;
    double n1;
    double n2;
    bool exit = false;

    do{
        cout << "Choose a calcualtion to perform:" << endl;
        cout << "Addition (+)" << '\n' << "Subtraction (-)" << '\n' << "Multiplication (*)" << '\n' << "Division (/)" << endl;
        cin >> choice;

        if (choice == '+'){
            cout << "Enter two numbers to add: ";
            cin >> n1 >> n2;
            cout << n1 << '+' << n2 << '=' << (n1 + n2) << endl;
        }

        else if (choice == '-'){
            cout << "Enter two numbers to subtract: ";
            cin >> n1 >> n2;
            cout << n1 << '-' << n2 << '=' << (n1 - n2) << endl;
        }

        else if (choice == '*'){
            cout << "Enter two numbers to multiply: ";
            cin >> n1 >> n2;
            cout << n1 << '*' << n2 << '=' << (n1 * n2) << endl;
        }

        else if (choice == '/'){
            do{
                cout << "Enter your first number to divide: ";
                cin >> n1;
                cout << "Enter your second number to divide: ";
                cin >> n2;
                if (n2 != 0){
                    break;
                }
                else{
                    if (n1 == 0){
                        break;
                    }
                    else{
                        cout << '\n' << "Divide by 0 error. Try again." << endl;
                    }
                }
            }
            while (n2 == 0);
            cout << n1 << '/' << n2 << '=' << (n1 / n2) << endl;
        

        }
        do{
            cout << "Would you like to make another calculation? (y/n)";
            cin >> choice;
            if (choice == 'y'){
                exit = false;
                break;
            }
            else if (choice == 'n'){
                exit = true;
                break;
            }
            else{
                cout << "Please input y or n.";
            }
        }
        while (choice != 'y' && choice != 'n');
    }
    while (exit == false);

    cout << "Exiting program . . . Goodbye!";

    return 0;
}