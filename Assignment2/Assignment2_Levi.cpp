#include <iostream>
#include <string>
using namespace std;

int main()
{

string booktitle;
string author;
float price;
//set variables 

cout<<"Enter book Title: " <<endl;
getline(cin, booktitle);

cout<<"Enter Author's name: " <<endl;
getline(cin, author); 

cout<<"Enter book price: " <<endl;
cin>>price;

cout<<" ----- Book Details -----" <<endl;
cout<<"Title: " << booktitle << endl;
cout<<"Author: " << author << endl;
cout<<"Price: $" << price << endl;

return 0;
}