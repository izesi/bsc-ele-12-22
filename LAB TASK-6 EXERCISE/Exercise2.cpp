#include <iostream>
using namespace std;

int main(){
   int rows;
   int columns;
//prompt the user for dimensions
   cout << "Enter the number of rows  not morethan 3: ";
   cin >> rows;

   if (rows > 3){
    cout<< "Error: number of rows exceeds 3 ";
    return 1;
   }

   cout<< "Enter the number of colums not morethan 3: ";
   cin>>columns;

   if (columns > 3){
     cout <<"Error: number of colums exceeds 3";
     return 1;
   }

   //dynamically allocates memory for the 2 dimension array

   double** arr = new double*[rows];

   for (int i=0; i < rows; i++){
     arr[i] = new double [columns];

   }
   //prompt the user to enter values for each element
   cout<< "Enter values for the array elements:\n ";

   for (int i =0; i<rows; ++i){

    for (int j = 0; j< columns; ++j){
        cout<< "Element [" << i << "]["<< j<< "]: ";
        cin >>arr[i][j];
    }
   }
  //display the array elements
  cout<< "\nArray elements: "<<endl;
  for (int i=0; i<rows; ++i){
    for (int j =0; j <columns; ++j) {
        cout << arr[i][j]<< " ";
    }
    cout<< endl;
    }
//dealloacate the memory
    for (int i = 0; i < rows; ++i){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}