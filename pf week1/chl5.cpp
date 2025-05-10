#include<iostream>
using namespace std;
int main ()  {

    char going;
    char lecture;
    cout<<"Do you have class today(press Y for yes): ";
    cin>>going ;
    cout<<"Are your friends going?(press Y for yes): ";
    cin>>lecture;

    if (going=='Y'&& lecture == 'Y' ){
        cout<<"You are also going";
    }
        
    



return 0;
}