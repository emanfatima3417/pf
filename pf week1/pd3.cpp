#include<iostream>
using namespace std;
int main () {
#include<iostream>
using namespace std;
main (){
    cout<<"student name";
    string name;
    cin>>name;
    cout<<"english sunject marks: ";
    int emarks;
    cin>>emarks;

    cout<<"maths subject marks: ";
    int mmarks;
    cin>>mmarks;

    cout<<"chemistry subject marks: ";
    int cmarks;
    cin>>cmarks;

    cout<<"social science marks: ";
    int smarks;
    cin>>smarks;

    cout<<"biology sunject marks: ";
    int bmarks;
    cin>>bmarks;
    int totalmarks;
    totalmarks =emarks+mmarks+cmarks+smarks+bmarks;
    cout<<"total marks"<<totalmarks;
    float percent;
    percent=(totalmarks/500.0)*100.0;
    cout<<"total percentage: "<<percent<<endl;

    if(percent>=90 && percent<=100)
    cout<<name<<"you got A+ "<<endl;

    if(percent>=80 && percent<90)
    cout<<name<<"you got A"<<endl;


if(percent>=70 && percent<80)
    cout<<name<<"you got B+"<<endl;


if(percent>=60 && percent<70)
    cout<<name<<"you got B"<<endl;


if(percent>=50 && percent<60)
    cout<<name<<"you got C"<<endl;
    
    if(percent>=40 && percent<50)
    cout<<name<<"you got D"<<endl;

    if(percent<40)
    cout<<name<<"you got F"<<endl;

  return 0;


}
