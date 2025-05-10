#include<iostream>
using namespace std;
int main () 

 cout<<"Enter exam starting time(hours): "<<endl;
int starth;
cin>>starth;
cout<<"Enter starting time(minutes): "<<endl;
int startm;
cin>>startm;
cout<<"Enter exam arrival time(hours): "<<endl;
int arivalh;
cin>>arivalh;
cout<<"Enter exam arrival time(minutes): "<<endl;
int arivalm;
cin>>arivalm;
int totalstartminutes=starth*60+startm;
int totalarrivalminutes=arivalh*60+arivalm;
int difference=totalarrivalminutes-totalstartminutes;
if(difference>0){
    cout<<"Late"<<endl;
    if(difference>=60){
    int hours=difference/60;
    int minutes=difference-(hours*60);
    cout<<hours<<":";
    if(minutes<10)
      cout<<"0";
      cout << minutes << " hours after the start";
}else{
    cout << difference << " minutes after the start";
}
}
else if (difference>=-30){
         cout<<"On time"<<endl;
        if(difference!=0)
        cout << endl << -difference << " minutes before the start";
}else{
    cout<<"Early"<<endl;
    if(difference<=-60){
        int hours=-difference/60;
        int minutes=-difference-(hours*60);
        cout<<hours<<":"<<endl;
        if(minutes<10)
          cout<<"0";
          cout << minutes << "hours before the start ";



    

}else{
    cout << -difference << " minutes before the start";

}

return 0;
}
