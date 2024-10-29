#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//The assignment says I must be for the rows, so I decided to use P for the Print and S for the Space.
int I, P, S;

for (I = 1; I <= 5;I++)
{
    for (S = 4;S >= I;S--)
    cout << "   ";

    for (P = 1;P <= I;P++)
    {
        cout << I;
        if (P < I)
        cout << "     ";
    }
//I'd just like to mention that the spacing given is completely wrong, though that may be the point to
//get us to solve the issue ourselves. I could've also just misread it.

    cout << endl;
}
    return 0;
}

/*
I think an important thing about nested loops that this taught me is that you can still have one thing
happen after another, as we see with the two inner 'for' statements within the first one. Even though
each for statement is dependent on the outer one, the order of the statements is important, as I don't
want the first of the inner for statements happening AFTER the second one starts to resolve.
*/