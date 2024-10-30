#include <iostream>
using namespace std;

int main() {
int rows=5; //declaring the rows variable

for (int i=1; i<=rows; i++) { //this outer function increments i till it is greater than or equal to "rows"
    for (int j=1; j <= rows-i; j++) { // this inner function creates the shape of a pyramid, it becomes smaller as i increases
        cout << "    " ; // it prints 4 spaces
    }
    for (int k=1; k<=i; k++) { // this inner function is why the rows have increasing numbers
        cout << i << "       "; // it prints i followed by 7 spaces
    }
cout << endl; //creates a new row for the pyramid
}



    return 0;
}
// Nested loops control the printing of spaces and numbers in the pyramid. First off, the outer for function allows i to 
// count up till it reaches the desired numbers of rows for the pyramid. The next inner function, prints spaces that steadily
// decreases as I increases to create the shape of a pyramid. Lastly, the last inner function prints numbers that increase
// based on the value of i, or the rows.