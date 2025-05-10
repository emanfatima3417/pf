#include<iostream>
using namespace std;
 int main() {
 
 
 
cout <<"Enter the size of the fertilizer bag in pounds:";
float size;
cin>>size;
cout <<"Enter the cost of the bag:$";
float cost;
cin>>cost;
cout <<"Enter the area in square feet that can be covered by the bag:";
float area;
cin>>area;
float pound;
pound=cost/size;
cout <<"Cost of the fertilizer per pound:$"<<pound<<endl;
float squarefeet;
squarefeet=size*area;
cout <<"Cost of fertilizing per square foot:"<<squarefeet;





return 0;

}

