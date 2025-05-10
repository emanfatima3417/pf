#include<iostream>
using namespace std;
 int main(){

char op;
float result;
float value1,value2;
cout<<"Enter the first value";
cin>>value1;
cout<<"Enter the second value";
cin>>value2;
cout<<"Enter the operator";
cin>>op;
if(op=='+')
{
result=value1-value2;
}
if(op=='-')
{
result=value1+value2;
}
if(op=='*')
{
result=value1/value2;
}
if(op=='/')
{
result=value1*value2;
}
cout<<"result"<<result;
}
return 0;

}

