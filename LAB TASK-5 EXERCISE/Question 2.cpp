#include<iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main (){
    srand(time(0));

    int daysUntilExpiration = rand() % 12;

    switch(daysUntilExpiration){
    case 0:
        cout<<"Your subscription has expired."<< endl;
        break;
    
    case 1:
        cout<< " Your subcription expires within a day"<<endl;
        cout<< "Renew now and save 20% "<< endl;
        break;
    
    case 2:
    case 3:
    case 4:
    case 5:
        cout <<"Your subscrption expires in ";
        cout << daysUntilExpiration;
        cout<< " days"<< endl;
        cout<<"Renew now to save 10%";
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
       cout<< "Your subscription will expire soon. Renew now"<< endl;
       break;
       default:
       cout << "You have an active subscription";
       
          break;
    }
    return 0;
}
