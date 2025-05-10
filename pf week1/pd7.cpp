#include<iostream>
using namespace std;
int main(){
cout<<"Enter month May, June, July, August, September or October: "<<endl;
string month;
cin>>month;
cout<<"Enter the number of stays"<<endl;
int stays;
cin>>stays;
float studio;
float apartment;
float discount;
float discount1;
float totalapartment;
float totalstudio;
if(month=="May" || month=="October"){
       studio=50;
       if(stays>14){
       discount=50*0.30;
    }
     else if(stays>7){
        discount=50*0.05;
    
    }
      

     
}
if(month=="June" || month=="September"){
       studio=75.20;

     if(stays>14){
     discount=75.20*0.20;
      
      }
      
}
if(month=="July" || month=="August"){
       studio=76;
      
        discount=0;
      
      } 

if(month=="May" || month=="October"){
    apartment=65;
    discount1=65*0.10;
    
}else if(month=="June" || month=="September"){
    apartment=68.70;
    discount1=68.70*0.10;
    

}else if(month=="July" || month=="August"){
    apartment=77;
    discount1=77*0.10;
    
}
totalstudio=(studio*stays)-(stays*discount);
totalapartment=(apartment*stays)-(stays*discount1);
cout<<"apartment= "<<totalapartment<<endl;
cout<<"studio= "<<totalstudio<<endl;
}