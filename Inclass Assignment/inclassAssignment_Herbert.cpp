#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float netBalance, averageDailyBalance, interest, interestRate, payment;
    int d1, d2;
    //declare variables


    cout << "Enter Net Balance: " << endl;
    cin >> netBalance;

    cout << "Enter payments made: " << endl;
    cin >> payment;

    cout << "Enter number of days in billing cycle: " << endl;
    cin >> d1;

    cout << "Enter number of days before billing cycle: " << endl;
    cin >> d2;

    cout << "Enter interest rate: " << endl;
    cin >> interestRate;
    //collect user input

    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    interest = averageDailyBalance * interestRate;
    cout << "Your Average Daily Balance: $" << fixed << setprecision(2) << averageDailyBalance << endl;
    cout << "Interest: $" << fixed << setprecision(2) << interest << endl;
    //calculate interest

    return 0;
}