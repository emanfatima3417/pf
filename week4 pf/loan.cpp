#include<iostream>
using namespace std;
int main(){
cout<<"Enter your age: "<<endl;
int age;
cin>>age;
cout<<"Enter your monthly income: "<<endl;
int monthly;
cin>>monthly;
cout<<"Enter the credit score: "<<endl;
int score;
cin>>score;
if(age<18){
cout<<"you are not elegible for loan"<<endl;
}
if(age>=18){
if(monthly<30000)
cout<<"your income is too low for a loan."<<endl;
}
if(age>=18){
if(monthly>=30000)
if(score>=700)
cout<<"Loan Approved"<<endl;
}
if(age>=18){
if(score<700)
if(score>=600)
cout<<"Loan Approved with higher interest rate"<<endl;
}
if(age>=18){
if(score<700)
cout<<"Loan denied due to low credit score"<<endl;
}
}
