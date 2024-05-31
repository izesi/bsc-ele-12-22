#include <iostream>
#include <string>

using namespace std;
int main(){

   

   int* dynamicInt = new int;//dyanmically allocate integer

    string* dynamicString = new string;//dynamically alllocate   string

   //prompt the user to assign a value to the dynamically  allocated integer 
   cout<< "Enter an integer value: ";
   cin >> *dynamicInt;

cout << "Enter a string value: ";
cin.ignore();

getline(cin, *dynamicString);
//output the value entered
cout << "Integer value: ";
cout << *dynamicInt << endl;

cout<< "string value: ";
cout<< *dynamicString;

//deallocate memory 
delete dynamicInt;
delete dynamicString;
}