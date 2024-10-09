#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // VARIABLES
    float netBal;      // balance shown in bill
    float payment;     // the payment made
    float d1;          // # of days in billing cycle
    float d2;          // # of days payment is made before billing cycle
    float avgDailyBal; // used to help calculate the interest on a credit card's unpaid balance
    float interest;    // the calculated interest that will be outputted at the end of the program

    // INPUTS
    std::cout << "Enter the balance shown in your bill.";
    std::cin >> netBal;
    // Asks the user to input the value for 'netBal'

    std::cout << "Enter the payment made.";
    std::cin >> payment;
    // Asks the user to input the value for 'payment'

    std::cout << "Enter the number of days in your billing cycle.";
    std::cin >> d1;
    // Asks the user to input the value for 'd1'

    std::cout << "Enter the number of days payment is made before your billing cycle.";
    std::cin >> d2;
    // Asks the user to input the value for 'd2'


    // CALCULATIONS
    avgDailyBal = (netBal + d1 - payment * d2)/d1; // Calculates the average daily balance
    interest = avgDailyBal * 0.0152;               // Calculates the interest on the card's unpaid balance


    // OUTPUTS
    cout << fixed << setprecision(2);
    std::cout << "The average daily balance is: $" << avgDailyBal << endl;  // Outputs the daily balance
    std::cout << "The interest is: " << interest << endl;           // Outputs the card's interest
    
    return 0;
}