#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {

srand (time(0));
int daysUntilExpiration = rand() % 12;// generate random number

if (daysUntilExpiration <= 0){
    cout <<"Your subscription has expired"<<endl;

}else if(daysUntilExpiration <= 1){
    cout<< "Your subscription expires within a day"<< endl;
    cout  << "Renew now and save 20%!"<<endl;

}else if(daysUntilExpiration <=5){
    cout<<"Your subscription expires soon in ";
    cout<< daysUntilExpiration ;
    cout << " days"<< endl;
    cout<<"Renew it and save 10%"<<endl;

}else if (daysUntilExpiration <= 10){
    cout<<"Your subscription will end soon. Renew now"<<endl;

}else{
    cout << "You have an active subscription"<<endl;
}

    return 0;
}