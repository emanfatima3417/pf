#include<iostream>
using namespace std;
 int main(){
float time=30000;
float working=63;
float holiday=127;
float numberofdays;
cout<<"Enter the days";
cin>>numberofdays;
float result1=365-numberofdays;
float result2=result1*63+numberofdays*127;
float differ=time-result2;
if (differ<=time){
cout<<"tom sleeps well"<<endl;
cout<<result2<<"less time for play"<<endl;
}
else{
cout<<"Tom runs away"<<endl;
cout<<result2<<"time for play";
}











return 0;

}

