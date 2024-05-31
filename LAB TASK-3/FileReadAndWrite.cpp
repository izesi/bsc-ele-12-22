#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char data[100];

    //open a text file in write mode.
    ofstream outfile;
    outfile.open("afile.txt");

    cout << "Writing to the file"<< endl;
    cout<< "Enter your name: ";
    cin.getline(data, 100);
    //write inputted data into the text file.
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    //again write inputted data into the text file.
    outfile << data << endl;

    // close theopened file
    outfile.close();
    //open  a text file in read mode.
    ifstream infile;
    infile.open("afile.txt");

    cout<< data<< endl;
    infile>> data;
    cout<< data<<endl;
    infile.close();
    return 0;


}