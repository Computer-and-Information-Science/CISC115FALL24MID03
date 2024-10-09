#include <iostream>
#include <iomanip>
using namespace std;

int main() {
double netbalance, interest, averagedailybalance;
int d1, d2, payment;


cin >> d1;
cin >> d2;
cin >> netbalance; 
cin >> payment;

averagedailybalance = (netbalance * d1 - payment * d2) / d1; 
interest = averagedailybalance * 0.0152;

cout << fixed << setprecision(2) << "Interest: " <<interest;

return 0;


}
