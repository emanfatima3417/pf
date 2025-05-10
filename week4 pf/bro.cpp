#include<iostream>
using namespace std;
 int main(){
cout<<"Enter the name of first brother";
string bro1;
cin>> bro1;
cout<<"Enter the name of second brother";
string bro2;
cin>>bro2;
cout<<"Enter the name of third brother";
string bro3;
cin>>bro3;
cout<<"Enter the age of first brother";
int age1;
cin>>age1;
cout<<"Enter the age of second brother";
int age2;
cin>>age2;
cout<<"Enter the age of third brother";
int age3;
cin>>age3;

if (age1<age2){
if(age1<age3)
{
 cout << "Yougest brother is: " << bro1 << endl;
}
}
if (age2<age3){
if(age2<age1)
{
cout <<"Youngest brother is:"<<bro2 <<endl;
}
}
if (age3<age2){
if(age3<age1){
cout<<"Youngest brother is:"<<bro3 <<endl;
}
}





return 0;

}

