#include<iostream>
using namespace std;
main(){
    int day;
    string month;
cout<<"enter the day of month:";
cin>>day;
cout<<"enter the date of month:";
cin>>month;
if((day>=21 && month=="march" )||(day<=19 && month=="april")){
    cout<<"sign is :aries";
}
if((day>=20 && month=="april")|| (day<=20 && month=="may")){
    cout<<"sign is :taurus";
}
if((day>=21 && month=="may")|| (day<=20 && month=="june")){
    cout<<"sign is : gemini";
}
if((day>=21 && month=="june") || (day<=22 && month=="july")){
    cout<<"sign is :cancer";
}
if ((day>=23 && month=="july")|| (day<=22 && month=="august")){
    cout<<"sign is :leo";
}
if((day>=23 && month=="august")|| (day<=22 && month=="september")){
    cout<<"sign is : virgo";
}
if ((day>=23 && month=="september") || (day<=22 && month=="october")){
    cout<<"sign is :libra";
}
if ((day>=23 && month=="october")|| (day<=21 && month=="november")){
    cout<<"sign is :scorpio";
} 
if ((day>=22 && month=="november")|| (day<=21 && month=="december")){
    cout<<"sign is :sagittarius";
}
if ((day>=22 && month=="december")|| (day<=19 && month=="january")){
    cout<<"sign is :capricorn";
}
if ((day>=20 && month=="january") || (day<=18 && month=="feburary")){
    cout<<"sign is :aquaris";
}
if((day>=19 && month=="feburary")|| (day<=20 && month=="march")){
    cout<<"sign is :pisces";
}
}
