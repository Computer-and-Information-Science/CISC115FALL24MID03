//used google for help on sections of code I was stuck on

#include <iostream> //for input/output like usual
#include <cstring> //will be used for manipulator functions. This is for the extra credit discussed in class
using namespace std;

//Functions
void sortNames(char names[][100], int size); //Function to sort names in alphabetical order
bool searchName(const char names[][100], int size, const char target[]); //Searches for a specific name in list
int countVowels(const char names[][100], int size);// counts total number of vowels

int main() {
int n;

cout << "Enter the number of names: " << endl; //asks user for a number of names
cin >> n; //input is stored in this variable
cin.ignore();

char names[n][100]; //the array stores the number of names up to 100 characters

cout << "Enter " << n << " Names: " << endl;
for (int i=0; i<n; i++) { //loops till n is reached
    cin.getline(names[i],100); //this reads the full line including spaces
}

cout << endl; //used throughout code to space it and display it neatly

sortNames (names,n); //function used here from earlier

cout << "Sorted Names: " << endl; 
for (int i=0; i<n; i++) { //displays the names sorted
    cout << names[i] << endl;
}

cout << endl; //spacing here for neatness

char target[100]; //Array stores the name that needs to be looked for
cout << "Enter a name to search: " << endl;
cin.getline(target,100); //includes spaces in the input

if(searchName(names, n ,target)) { //checks if the name is in the list, and responds accordingly
cout << target << " is in the list" << endl;
} else {
    cout << target << " is not in the list" << endl;
}

cout << endl;

char copiedName[100]=""; //array stores the longest name
int maxLength=0; //stores length of the longest name

for (int i=0;i<n; i++) { //finds the longest name in the list
    if (strlen(names[i])> maxLength) { //compares length of each
        maxLength= strlen(names[i]); //updates the length
        strncpy (copiedName, names[i],100);//copies the longest name
    }
}

cout << "Longest Name: " << copiedName << endl; //prints the longest name found from the code above


int totalVowels= countVowels(names,n); //counts the total number of vowels, this was at the begining of the code
cout << "Total Number of Vowels are: " << totalVowels << endl; //displays it


return 0;
}
//used google for help in this section

//sorts names alphabetically
void sortNames(char names[][100], int size) {
char temp[100]; //temporary variable swaps names
for (int i=0; i<size-1; i++) { //sorts the name
    for(int j=i+1;j<size;j++) {
        if (strcmp(names[i], names[j])>0) {
        //Swap names [i] and [j]
        strcpy(temp,names[i]);
        strcpy(names[i],names[j]);
        strcpy(names[j],temp);
        }
    }
}
}
//Searches for a specific name in the list
bool searchName(const char names[][100],int size,const char target[]) {
    for (int i=0;i<size; i++) { //loop used to look through list of names
        if(strncmp(names[i],target,100)==0){
            return true; //name found
        }
    }
return false; //name not in list
}

//counts the total number of vowels
int countVowels(const char names[][100],int size){
    int vowelCount=0; //counter that is used for vowels
    for (int i=0; i<size; i++) { //loops through each name
        for (int j=0;j<strlen(names[i]);j++) { //loops through each character in the name
            char ch= names[i][j];//assigns a value from both list to ch, to check its vowels
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A' ||ch=='I' || ch=='O' ||ch=='E' ||ch=='U') { //checks if any conditions are met
                vowelCount++; //if they are, the counter goes up
            }
        }
    }
return vowelCount;//returns the total count of vowels
}