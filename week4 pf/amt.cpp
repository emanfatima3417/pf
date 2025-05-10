#include<iostream>
using namespace std;
 int main(){
cout<<"Enter the amount: ";
float amt;
cin>>amt;
if(amt<=5000){
float dis;
dis=amt*5/100;
float pay;
pay=amt-dis;
cout<<"Your payable amount"<<pay<<endl;
}
else{
float dis;
dis=amt*10/100;
float pay;
pay=amt-dis;
cout<<"Your payable amount"<<pay<<endl;
}
return 0;
}

