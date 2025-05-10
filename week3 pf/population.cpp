#include<iostream>
using namespace std;
 int main(){

cout<< "Current world population: ";
int population;
cin >>population;
int days;
cout<< "Enter monthly birth rate(number of births per months): ";
int birth;
cin >>birth;
int answer=(birth*12)*30;
int result;
result=answer+population;
cout<<"The population in three decades will be "<<result;












return 0;

}

