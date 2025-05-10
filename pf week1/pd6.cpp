#include <iostream>
using namespace std;

int main() {
    string days;
    cout << "Enter the Day: ";
    cin >> days;
    
    string fruit;
    cout << "Enter the Fruit: ";
    cin >> fruit;
    
    float kg;
    cout << "Enter the kg: ";
    cin >> kg;

    float price = -1; 
    if ((days == "monday" || days == "tuesday" || days == "wednesday" || days == "thursday" || days == "friday")) {
        if (fruit == "banana") price = 2.50 * kg;
        else if (fruit == "apple") price = 1.20 * kg;
        else if (fruit == "orange") price = 0.85 * kg;
        else if (fruit == "grapefruit") price = 1.45 * kg;
        else if (fruit == "kiwi") price = 2.70 * kg;
        else if (fruit == "pineapple") price = 5.50 * kg;
        else if (fruit == "grapes") price = 3.85 * kg;
    }
  
    else if (days == "saturday" || days == "sunday") {
        if (fruit == "banana") price = 2.70 * kg;
        else if (fruit == "apple") price = 1.25 * kg;
        else if (fruit == "orange") price = 0.90 * kg;
        else if (fruit == "grapefruit") price = 1.60 * kg;
        else if (fruit == "kiwi") price = 3.00 * kg;
        else if (fruit == "pineapple") price = 5.60 * kg;
        else if (fruit == "grapes") price = 4.20 * kg;
    }

    if (price == -1) {
        cout << "error" << endl;
    } else {
        cout << "The price is " << price << endl;
    }

    return 0;
}
