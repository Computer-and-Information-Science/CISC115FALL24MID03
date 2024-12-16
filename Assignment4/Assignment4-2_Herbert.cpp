#include <iostream>
using namespace std;

int main(){
    int rows = 5;
    int i;
    int j;
    int k = rows;

    for (i = 1; i <= rows; i++) {

        for (j = 1; j <= rows; j++) {

            if (j >= k){
                cout << i;
                cout << "       ";
            }
            else{
                cout << "    ";
            }
        }
        k--;
        cout << "\n";
    }

    return 0;
}
