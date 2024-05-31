#include <iostream>
using namespace std;

int main(){
    int* px = nullptr;
    int x = 10;
    px = &x;

    cout<<"address of a variable: "<< x<<endl;
    
    cout<<"address of a pointer : "<<*px<<endl;
    *px = 667876543289;
    cout<<"address of a aft : "<<*px<<endl;
    return 0;
}