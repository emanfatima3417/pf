#include<iostream>
using namespace std;
 int main(){
string my_password,user_enter;

my_password="pass@123!";
cout<<"Enter the password:";
cin>>user_enter;

if(user_enter == my_password){
cout<<"wow !You have cracked the code!";
}
else{
cout<<"It is not that simple,Try Again";
}











return 0;

}

