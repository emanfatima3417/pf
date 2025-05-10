#include<iostream>
using namespace std;
 int main(){
cout<<"Number of red roses"<<endl;
float red;
cin>>red;
cout<<"Number of white roses"<<endl;
float white;
cin>>white;
cout<<"Number of Tulips"<<endl;
float Tulips;
cin>>Tulips;
float redprice=red*2.00;
float whiteprice=white*4.10;
float tulipprice=Tulips*2.50;
float totalprice=redprice+whiteprice+tulipprice;
cout<<"Original price "<<totalprice<<endl;
if(totalprice>200){
float discount=totalprice*0.20;
float finalprice=totalprice-discount;
cout<<"Applied discount" <<discount<<endl;
   cout<<"Discounted price"<<finalprice<<endl;
}

   


















return 0;

}

