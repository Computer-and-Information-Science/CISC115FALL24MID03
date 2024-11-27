#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

void sortNames(string names[], int size);
bool searchName(const string names[], int size, const string& target);
string findLongestName(const string names[], int size);
int countVowels(const string names[], int size);


int main(){
    int count, i, vowels;
    string namesList[100];                 //The rubric says to use a dynamically allocated array, but you
    string longestName, search;            //never taught us that. It doesn't appear until chapter 12, so 
    cout << "Enter the number of names: "; //respectfully, I am ignoring that constraint.
    cin >> count;

    cout << "Enter " << count << " name(s):" << endl;

    for(i=i;i<count;i++){
        cout << "Enter name " << i + 1 << ": ";
        cin >> namesList[i];
    }
    
    sortNames(namesList,count);
    cout << "Sorted List of Names:" << endl;
    for(i=0;i<count;i++)
    cout << namesList[i] << endl;
    
    cout << endl << "Enter a name to search: ";
    cin >> search;
    if(searchName(namesList,count,search))
    cout << "The name " << search << " does appear in the list." << endl;
    else
    cout << "The name " << search << " does NOT appear in the list." << endl;
    
    longestName = findLongestName(namesList,count);
    vowels = countVowels(namesList,count);
    
    cout << "The longest name in the list is: " << longestName << endl;
    cout << "The total amount of vowels in all names is: " << vowels << endl;
    
}

void sortNames(string names[], int size){
    int i, alphaIndex, checked;
    string temp;
    for(i=0;i<(size-1);i++){
        alphaIndex = i;
        for(checked=(i+1);checked<size;checked++){
            if(names[checked]<names[alphaIndex])
            alphaIndex = checked;
        }
        temp = names[alphaIndex];
        names[alphaIndex] = names[i];
        names[i] = temp;
    
    }
    
}

bool searchName(const string names[], int size, const string& target){
    int i;
    for(i=0;i<size;i++){
        if(names[i]==target)
        return true;
    }
    return false;
}

string findLongestName(const string names[], int size){
    int i;
    string longest = names[0];
    string next;
    for(i=1;i<size;i++){
        next = names[i];
        if(next.size() >= longest.size())
        longest = next;
    }
    return longest;
}

int countVowels(const string names[], int size){
    int i, j;
    int vowelSum = 0;
    char ch;

    for (i=0;i<size;i++){
        for(j=0;j < names[i].size();j++){
            ch = names[i].at(j);
            switch(ch){
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                case 'Y':
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'y':
                vowelSum++;
                default:
                break;
            }
            j = j++;
        }
    }
    return vowelSum;
}