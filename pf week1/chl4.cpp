#include <iostream>
using namespace std;
int main(){
int purchase;
cout<<"Enter the purchase";
cin>>purchase;
string day;
cout<<"Enter the day";
cin>>day;
if (day=="sunday"){
if(purchase>5000){
float discount=purchase*10/100;
float price=purchase-discount;
cout<<"The price is "<<price;
}
}   
else {
cout<<"The price is "<<purchase;
}
}