#include <iostream>

using namespace std;

int main(){

    int userInput;

    cout << "Please enter an integer value between 5 and 10: ";
    cin>>userInput;

    while(userInput < 5 || userInput >10){
        cout <<"Invalid input. please enter an integer value between 5 and 10: ";
        cin>>userInput;
    }
    cout << "Your input value ";
    cout << userInput;
    cout << " has been accepted. " << endl;

    return 0;
}