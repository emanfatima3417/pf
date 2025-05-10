#include<iostream>
using namespace std;
 int main(){
cout<<"Enter the name of country: ";
string country;
cin>>country;
cout<<"Enter the ticket price in dollars:";
int price;
cin>>price;
float dis;
if(country=="Ireland"){
dis=(10*price)/100;}
else {
dis=(5*price)/100;}
cout<<"Enter the final price  of ticket after the discount: " << dis;











return 0;

}

