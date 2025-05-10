#include<iostream>
using namespace std;
 int main(){

cout<< "Enter Initial velocity (m/s): ";
int initialvelocity;
cin >>initialvelocity;
cout<< "Enter Acceleration (m/s^2): ";
int acceleration;
cin>>acceleration;
cout<<"Enter Time (s): ";
int time;
cin>>time;
int velocity = (acceleration*time)+initialvelocity ;
cout<<"Final Velocity(m/s): "<<velocity;














return 0;

}

