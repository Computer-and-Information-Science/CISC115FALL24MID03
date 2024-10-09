#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int d1, d2;
float netBalance, payment, averageDailyBalance, interest;

cout << "Please enter the net balance." << endl;
cin >> netBalance;
cout << "Please enter the payment." << endl;
cin >> payment;
cout << "Please enter the number of days in your billing cycle." << endl;
cin >> d1;
cout << "Please enter the number of days from this payment until the next billing cycle." << endl;
cin >> d2;

averageDailyBalance = (netBalance*d1 - payment*d2)/d1;
interest = averageDailyBalance*0.0152;

cout << fixed << setprecision(2);
cout << "Your average Daily Balance is: $" << averageDailyBalance << endl;
cout << "The interest added will be: $" << interest << endl;


return 0;


}
