#include <iostream>
using namespace std;
int main(){
    int purchase;
    cout<<"Enter the purchase";
    cin>>purchase;
    string month;
    cout<<"Enter the month";
    cin>>month;
    string day;
    cout<<"Enter the day";
    cin>>day;
    if (day=="sunday" && month=="october"){
    float discount=purchase*10/100;
    float price=purchase-discount;
    cout<<"The price is "<<price;
    }
     else if (day=="thursday" && month=="november"){
        float discount=purchase*10/100;
        float price=purchase-discount;
        cout<<"The price is "<<price;
        }    
    else {
        cout<<"The price is "<<purchase;
    
    }
    }