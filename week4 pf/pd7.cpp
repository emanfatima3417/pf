#include<iostream>
using namespace std;
 int main(){
float area;
string shape;
cout<<"Enter the figure";
cin>>shape;
if(shape=="rectangle"){
float length;
cout<<"Enter the length";
cin>>length;
float width;
cout<<"Enter the width";
cin>>width;
area=length*width;
cout<<"its area is"<<area;
}
if(shape=="square"){
float number;
cout<<"Enter the side";
cin>>number;
area=number*number;
cout<<"its area is"<<area;
}
if(shape=="circle"){
float radius;
cout<<"Enter the radius";
cin>>radius;
area=(radius*radius)*3.14;
cout<<"its area is"<<area;
}
if(shape=="triangle"){
float height;
cout<<"Enter the heigth";
cin>>height;
float base;
cout<<"enter the base";
cin>>base;
area=(base*height)/2;
cout<<"its area is"<<area;
}







return 0;

}

