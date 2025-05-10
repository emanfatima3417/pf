#include<iostream>
using namespace std;
 int main(){

cout<<"Enter the size in mega bytes(MB):";
float megabytes;
cin >>megabytes;
float bytes;
bytes=megabytes*1024*1024*8;
cout<<megabytes<<"MB is equal to " << bytes<<" byts";



return 0;

}

