#include<iostream>
using namespace std;
 int main(){
 
 cout<<"Number of square meter you can paint:";
 int paint;
 cin>>paint;
 cout<<"Width of single wall( in meters):";
 int wall;
 cin>>wall;
 cout<<"Height of the single wall(in meters):";
 int height;
 cin>>height;
 float result;
 result=wall*height;
 float result2;
 result2=paint/result;
 cout<<"Numbers of walls you can paint:"<<result2;
 
 
 
 
 
 
 
 
return 0;

}

