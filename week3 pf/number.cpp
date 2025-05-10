#include<iostream>
using namespace std;
int main(){

cout<< "Enter a 4-digit number:";
int digit;
cin >>digit;
int x=(digit/10)%10;
int y=(digit/100)%10;
int z=(digit/1000);
int a=digit%10;
int sum=x+y+z+a;
cout<<"Sum  of the individual digits: "<<sum;














return 0;

}

