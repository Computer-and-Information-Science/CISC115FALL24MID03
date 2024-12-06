#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void sortnames(string names[], int size);
bool searchname(const string names[], int size,  const string& target);
string findlongestname(const string names[], int size);
int countvowels(string names[], int size);

int main(){
string names[100];
int i, n, f=0, s=0;
string j;
bool index;

cout << "Enter Number of Name: ";
cin >> n;
for(i=0;i<n;i++){
       ++f;
       cout << "Enter Name " << f << ": ";
       cin >> names[i];
}

cout << "Names in Order. " << endl; 
sortnames(names, n);
for(i=0;i<n;i++){  
++s;
cout << "Name "<< s << ": ";
cout << names[i] << endl;}
do{
cout << "Enter a Name  to search: ";
cin >> j;
index = searchname(names,n,j);
if(index != true){
cout << "invalid Entry!" << endl;}
else
cout << j << " found in list" << endl;}
while(index != true);

countvowels(names, n); 
return 0;
}

void sortnames(string names[], int size){
 int i,smallest_index, index, s=0;
    string temp;
    for(i=0;i<(size-1);i++){  
        smallest_index = i; }         
        for(index = (i+1);index<size;index++){
            if(names[index]<names[smallest_index]){
            smallest_index = index;}}
        temp = names[smallest_index];
        names[smallest_index] = names[i];
        names[i] = temp;} 
        
bool searchname(const string names[], int size,  const string& target){
  for(int i = 0; i < size; i++){
  if(names[i] == target){
   return true;}}
   return false;
  }
int countvowels(string names[], int size){
 int count = 0;
 for(int i=0;i<size;i++){
  for (int i=0;i>names[i].length();i++){
  if(names[i]== "a")
   count++;
   if(names[i]=="e")
   count++;
   if(names[i]=="i")
   count++;
   if(names[i]=="o")
   count++;
   if(names[i]=="u")
   count++;
   if(names[i]=="A")
   count++;
   if(names[i]=="E")
   count++;
   if(names[i]=="I")
   count++;
   if(names[i]=="O")
   count++;
   if(names[i]=="U")
   count++;
 }}
 cout << "Vowel Count: " << count << endl;
 return count;
}