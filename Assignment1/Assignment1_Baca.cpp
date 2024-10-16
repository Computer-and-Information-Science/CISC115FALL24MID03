#include <iostream>
#include <string>
using namespace std;
int main() {
int age=20;
double height=6.1;
char grade='A';
string Fullname="Emil Baca";
age=age+10;
float AgeF=(int) age;
int NewHeight=static_cast<double>(height);
cout<<"My name is : "<<Fullname<<endl;
cout<<"This is my first basic program in C++ "<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Height: "<<height<<endl;
cout<<"I want grade in CISC115: "<<grade<<endl;
cout<<"New Age: "<<AgeF<<endl;
cout<<"Rounded Height: "<<NewHeight<<endl;


    return 0;
}
