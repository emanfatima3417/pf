#include<iostream>
using namespace std;
 int main(){

cout<< "Enter the name of cricket team: ";
string team;
cin >>team;
cout<<"Enter the number of wins: ";
int wins;
cin>>wins;
cout<<"Enter the number of draws: ";
int draws;
cin >> draws;
cout<<"Enter the number of losses :";
int losses;
cin>>losses;
int result ;
result=(wins*3)+(draws*1)+(losses*0);
cout<<team<<"has obtained "<<result<<"points in asia team tournamnet";
 








return 0;

}

