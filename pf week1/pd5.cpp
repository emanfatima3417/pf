#include <iostream>
using namespace std;

int main() {
  cout<<"Enter which type of customer are you(Residential or Premium) select r/p"<<endl;
    string cust;
    cin>>cust;
    string day;
    if(cust=="p"){
        cout<<"press D for day time and N for night time"<<endl;
        cin>>day;
 }
cout<<"Enter the number of mins you used service"<<endl;
int mins;
cin>>mins;
float totalcharges1=10;
float totalcharges2=25;
if(cust=="r"){
   if(mins>50){ 
totalcharges1=(mins-50)*0.20;
cout<<"the charges are"<<totalcharges1+10<<endl;
}else if(mins<=50)
    cout<<"the charges are: 10"<<endl;  
} 

if(cust=="p" && day=="D" ){
   if(mins>75){
    totalcharges2=(mins-70)*0.10;
    cout<<"the chareges are"<<totalcharges2+25<<endl;
    }else if(mins<=75)

    cout<<"the charges are: 25"<<endl;
        

    }
if(cust=="p" && day=="N"){
      if(mins>100){
        totalcharges2=(mins-100)*0.05;
        cout<<"the charges are"<<totalcharges2+25<<endl;
      }else if(mins<=100)

        cout<<"the charges are: 25"<<endl;
      }

    return 0;
}
