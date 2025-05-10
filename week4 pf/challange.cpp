#include<iostream>
using namespace std;
 int main(){
float salary=10000;
float price=50000;
float advance=(salary*0.5);
float totaladvance=advance*6;
if(totaladvance==price){
cout<<"you can buy the laptop";
}
if(totaladvance!=price){
cout<<"you cannot buy the laptop"<<endl;
}
float requiredamount=price-totaladvance;
float months=requiredamount/advance;
cout<<"but you able to buy a laptop after "<<months<<" months";
}










return 0;

}

