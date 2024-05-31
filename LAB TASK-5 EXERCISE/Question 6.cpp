#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
//function to count vowels in a string
int countVowels(const string& str){
    int count = 0;
    for (char c :str){
        if(string("AEIOUaeiou").find(c) != string::npos){
            count++;
        }
    }
    return count;
}
//function to count words in a string
int countWords(const string& str){

    int count = 0;
    istringstream iss(str);
    string word;
    while (iss >> word){
        count++;
    }
    return count;
}
//function to reverse a string
string reverseString(const string& str){
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}
//function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const string& str){
    string result = str;
    for (size_t i = 0; i < result.length(); i++){
        if (i==0 || result[i - 1] ==' '){
            if (isalpha(result[i])){
                result[i] = toupper(result[i]);
            }

        }
    }
    return result;
}
int main(){
    //open the text file
    ifstream inputFile("textfile.txt");
    if (!inputFile.is_open()){
        cout<< "Error opening file."<<endl;
        return 1;
    }

        string fileData;
        getline(inputFile, fileData);
        inputFile.close();

        int vowelCount = countVowels(fileData);
        cout<<"Number of vowels: ";
        cout<<vowelCount<<endl;

        int wordCount = countWords(fileData);
cout<<"Number of words: "<< wordCount<<endl;

string reversed = reverseString(fileData);
cout << "Reversed statement: "<< reversed<<endl;

string capitalized = capitalizeSecondLetter(fileData);
cout<<"Capitalized second letters: "<< capitalized<<endl;

return 0;



    
}