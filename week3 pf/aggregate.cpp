#include<iostream>
using namespace std;
 int main(){

cout<< "Enter students name:";
string name;
cin >>name;
cout<< "Enter matriculation marks(out of 1100):";
float matric;
cin>>matric;
cout<<"Enter intermediate marks(out of 550):";
float inter;
cin>>inter;
cout<<"Enter Ecat marks(out of 400)";
float ecat;
cin>>ecat;

float aggregate;
aggregate=(ecat/400*50)+(inter/555*40)+(matric/1100*10);
cout<<"aggreagte:"<<aggregate;
    






return 0;

}

