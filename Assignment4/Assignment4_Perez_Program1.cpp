#include <iostream>
#include <iomanip>

using namespace std;

int main(){

/*
The variables are all declared at the beginning. The variable i is only there for formatting, which
is why I didn't bother to give it a real name.
*/
int num1, num2, numFinal, i;
char selectYN, selectOP;

//This text is outside the "do" statement, as it wouldn't make sense to welcome someone more than once.
cout << "Welcome to the Menu-Driven Calculator!" << endl;

//I used a do statement, as it is assumed that you want to access the calculator at least once.
do
{
/*
The next few lines of code are 1 of 3 different things.
1) Gathering data from the user.
2) Formatting for neatness of the output.
3) A failsafe.
*/
cout << "Please enter the first number: ";
cin >> num1;
//I had no clue how to catch an invalid int input, so I did some research, and this is what I found.
while(cin.fail()) 
{
    cin.clear();
    cin.ignore(10000,'\n');
    cout << "Bad entry. Please enter a NUMBER: ";
    cin >> num1;
}
cout << "Please enter the second number: ";
cin >> num2;
while(cin.fail()) 
{
    cin.clear();
    cin.ignore(10000,'\n');
    cout << "Bad entry. Please enter a NUMBER: ";
    cin >> num2;
}

for (i = 1;i <= 40;i++)
    cout << '~'; 
    cout << endl;
    
cout << "The following operations are available:" << endl;
cout << "1) Addition (+)" << endl;
cout << "2) Subtraction (-)" << endl;
cout << "3) Multiplication (*)" << endl;
cout << "4) Division (/)" << endl;

for (i = 1;i <= 40;i++)
    cout << '~'; 
    cout << endl;
    
cout << "Please select which operation to perform (+,-,*,/): ";
cin >> selectOP;

for (i = 1;i <= 40;i++)
    cout << '~'; 
    cout << endl;

//The first if statement catches a "Divide by 0" error by reading the inputs before any calculations.
if ((num2 == 0) && (selectOP == '/'))
    cout << "ERROR: Cannot divide by 0.";

/*
The second if statement catches an invalid input from line 46. 
So long as both checks are passed, the code continues to the calculations.
*/
else if (((selectOP != '+') && (selectOP != '-')) && ((selectOP != '*') && (selectOP != '/')))
    cout << "ERROR: Invalid operator selected.";

//A switch case is used to select what operation is done between the two numbers.
else
{
    switch (selectOP)
    {
    case '+':
    numFinal = num1 + num2;
    break;

    case '-':
    numFinal = num1 - num2;
    break;

    case '*':
    numFinal = num1 * num2;
    break;

    case '/':
    numFinal = num1 / num2;
    break;
    }
    cout << "Result: " << num1 << ' ' << selectOP << ' ' << num2 << " = " << numFinal;
}
cout << endl;

/*
From here, the user is allowed to decide if they want to calculate another number.
If they don't, the while statement will break.
*/
cout << "Would you like to perform another calculation? (y/n): ";
cin >> selectYN;

//This is another error catch, in case the user doesn't select 'y' nor 'n'
while ((selectYN != 'y') && (selectYN != 'n'))
{
    cout << "Invalid input. Please try again.: ";
    cin >> selectYN;
}

for (i = 1;i <= 40;i++)
    cout << '~'; 
    cout << endl;

}
while(selectYN == 'y');

//Once the user exits the calculator, they are given a farewell.
cout << "Thank you for using the Menu-Driven Calculator!" << endl;

return 0;
}
