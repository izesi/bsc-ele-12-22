#include <iostream>
using namespace std;


void  SwapNumbers(int &VarA, int &VarB)
{
   int temp = VarA;
   VarA = VarB;
     VarB = temp;

    
}

int main(){
    int VarA = 25;
    int VarB =100;

    cout <<"VarA before swap: "<<VarA <<endl;//varA is 25
    cout <<"VarB before swap: "<<VarB<<endl;//VarB is 100
 SwapNumbers(VarA, VarB);

    cout <<"varA after Swap: "<< VarA <<endl;//VarA is 100
    cout<<"VarB after swap: "<<VarB<<endl;//varB 25
    return 0;
}