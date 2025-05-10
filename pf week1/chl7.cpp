#include <iostream>
using namespace std;
int main(){
int purchase;
cout<<"Enter the purchase";
cin>>purchase;
string day;
cout<<"Enter the day";
cin>>day;
if (day=="sunday" ){
float discount=purchase*10/100;
float price=purchase-discount;
cout<<"The price is "<<price;
}
if (day=="Monday"){
    float discount=purchase*8/100;
    float price=purchase-discount;
    cout<<"The price is "<<price;
    }
   
else {
    float discount=purchase*5/100;
    float price=purchase-discount;
    cout<<"The price is "<<price;

}
}