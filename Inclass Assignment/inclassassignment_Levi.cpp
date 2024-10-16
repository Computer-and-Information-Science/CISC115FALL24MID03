
#include <iostream>
using namespace std;
int main()
{
 
 double netBalance;
 double payment;
 int d1;
 int d2;
 double interest;
 double averageDailyBalance;
 double averageBalwithInterest;
 //setting up my variables
 
cout<<"Enter your net balance: " << endl;
cin >> netBalance;
  
cout << "Enter payment made: " << endl;
cin >> payment;
 
 
cout << "Enter number of days in the billing cycle: " << endl;
cin >> d1;
 
 
cout << "Enter number of days payment is made before billing cycle: " << endl;
cin >> d2;
//setting numbers for each variable

averageDailyBalance = (netBalance*d1-payment*d2)/d1;
cout<< "Your average Daily Balance is: $" << averageDailyBalance << endl;  
 
interest = averageDailyBalance*0.0152;
cout<<" How much interest you have to pay: $" << interest << endl; 
// the results and math
 
 
return 0;
}